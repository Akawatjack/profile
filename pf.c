<!DOCTYPE html>
<html>

<head>
     <title>Profile</title>
     <meta name="viewport" content="width=device-width, initial-scale=1">
     <link rel="preconnect" href="https://fonts.googleapis.com">
     <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
     <link href="https://fonts.googleapis.com/css2?family=League+Gothic&family=Oswald:wght@300&display=swap"
          rel="stylesheet">

     <style>
          body {
               font-family: 'League Gothic', sans-serif;
               font-family: 'Oswald', sans-serif;
               text-align: center;
               background-image: url("2.jpg");
               background-size: cover;
               background-attachment: fixed;
          }

          h1 {
               color: #fff;
               font-size: 38px;
          }

          .BG {
               background-color: rgba(100, 100, 100, 0.439);
               position: absolute;
               transform: translate(-50%, -50%);
               top: 50%;
               left: 50%;
               border-radius: 10px;
               backdrop-filter: blur(7px);
               border: 2px solid rgba(255, 255, 255, 0.1);
               box-shadow: 0 0 40px rgba(8, 7, 16, 0.6);
               padding: 50px 35px;
               width: 60%;
          }

          .Img {
               margin-top: 2%;
               text-align: center;
          }

          .Img img {
               border-radius: 50%;
          }

          button {
               margin-top: 2%;
               display: inline-block;
               padding: 6px 12px;
               font-weight: 400;
               line-height: 1.42857143;
               text-align: center;
               white-space: nowrap;
               vertical-align: middle;
               cursor: pointer;
               border: 1px solid transparent;
               border-radius: 4px;
               color: #fff;
               background-color: #000000c7;
               border-color: #2221218c;
               padding: 10px 16px;
               font-size: 18px;
          }

          .modal {
               display: none;
               position: fixed;
               z-index: 1;
               padding-top: 100px;
               left: 0;
               top: 0;
               width: 100%;
               height: 100%;
               overflow: auto;
               background-color: rgb(0, 0, 0);
               background-color: rgba(0, 0, 0, 0.4);
          }

          .modal-content {
               background-color: #fefefe;
               margin: auto;
               padding: 20px;
               border: 1px solid #888;
               width: 80%;
          }

          .close {
               color: #aaaaaa;
               float: right;
               font-size: 28px;
               font-weight: bold;
          }

          .close:hover,
          .close:focus {
               color: #000;
               text-decoration: none;
               cursor: pointer;
          }

          .name {
               font-size: 38px;
               margin-top: 0%;
               margin-bottom: 1%;
          }

          p {
               font-size: 22px;
          }
     </style>
</head>

<body>
     <div class="BG">
          <h1>MY PROFILE</h1>
          <br>
          <hr>
          <div class="Img">
               <img src="1.jpg" width="400" height="400" />
          </div>

          <button id="myBtn">Click Here</button>
     </div>

     <div id="myModal" class="modal">

          <div class="modal-content">
               <span class="close">&times;</span>
               <br>
               <img src="1.jpg" width="400" height="400">
               <br><br>
               <hr>
               <p class="name"><b> Akawat Wongsiri </b></p>
               <p>Student ID 1630900775</p>
               <p>Engineering</p>
          </div>

     </div>

     <script>
          var modal = document.getElementById("myModal");

          var btn = document.getElementById("myBtn");

          var span = document.getElementsByClassName("close")[0];

          btn.onclick = function () {
               modal.style.display = "block";
          }

          span.onclick = function () {
               modal.style.display = "none";
          }

          window.onclick = function (event) {
               if (event.target == modal) {
                    modal.style.display = "none";
               }
          }
     </script>

</body>

</html>