<h1>TASK 3 - Computer Vision</h1>
<br>
<br>

### Link to (training + test) dataset Google drive : <a href = "https://drive.google.com/drive/folders/1AEoCLG2iK0ump00mSscnkK12M_6_Mbbp?usp=sharing">Link</a>    <br>
## Approach of finding dataset

I currently used dataset from https://oa.cc.iitk.ac.in which I found in Student Search Inspect. But Finding dataset was too tedious at first because what i initially did, I took a dataset from Google Dataset Search of masked persons which consisted of masked men and women intermixed. I separated that dataset manually into Men and Women and got 100 images data. And those pictures were of Chineese and Japanese Guys mostly. I trained my model on that dataset but since dataset was too less, I mixed 200 images of Asian people in that data. And that was the point my whole model ruined up, because my accuracy went too low. Then I clicked images of my wingies which took me to idea of using Student Search images data. And then I applied mask using a Github repo Mask_face and made a dictionary of  {Roll No,Gender}  using Student Search HTML page data.

# Approach to problem




# Instructions for running code
1. Open the Google Drive link for dataset (which I've given access to write anyone with link) and move it to your Google Drive.
2. Open Gender_detection.ipynb file in collab and run first two cells, Second cell is for mounting Google Drive with Collab.
3. After Mounting your Drive, Go to /content/drive/MyDrive/   and find the dataset folder. Copy its path and paste it in 3<sup>rd</sup> cell --> WithMask = 'paste_here' and run cell.
4. After that run all cells. I've used data from my Google Drive folder, of which 20% I've used for validation. Select GPU accelerator while <br>
running all cells.
5. Once all cells will run completely then scroll down to last cell which has a gradio link for Gender Prediction Interface.
6. Enter Image index between (0 to 1200) for particular prediction.
7. I gradio link expires then create a new cell below it and run the following code with own choice of image_index :         <br>         <br>         <br>
image_index = 700           <br>
print("Original Gender:", gender_dict[WithMask_y[image_index]])         <br>
pred = model.predict(WithMask_X[image_index].reshape(1, 128, 128, 1))         <br>
pred_gender = gender_dict[round(pred[0][0][0])]         <br>
pred_age = round(pred[1][0][0])         <br>
print("Predicted Gender:", pred_gender)         <br>
plt.axis('off')         <br>
plt.imshow(X[image_index].reshape(128, 128), cmap='gray');         <br>         <br>         <br>

# Model in action
<br>
<br>
This is Result for a particular image_index for which model is predicting correctly.<br><br><br>


<img src="https://github.com/the-aryan-1712/pClub_Seccy_task/assets/156575544/38bc6bc3-4ebd-4c83-9880-442c30b7ba5d" height="600" width="1000" />
<br><br>
 This is a Accuracy v/s Epochs graph for the model. Validation accuracy is getting saturated somewhere below 1. <br><br><br>


<img src="https://github.com/the-aryan-1712/pClub_Seccy_task/assets/156575544/d8e5160c-051c-4bae-96ac-de2529c4ae6a" height="600" width="1000" />
<br><br>
 This is a Loss v/s Epochs graph for the model. Validation Loss is reducing as we are increasing epoch size but after 15 epochs, Validation Loss is again increasing. But its good to go with 0.2 as I did it with comparitively less dataset.<br><br><br>


<img src="https://github.com/the-aryan-1712/pClub_Seccy_task/assets/156575544/a5d3eea5-4d50-4100-bf20-9973744b8c7f" height="600" width="1000" />


