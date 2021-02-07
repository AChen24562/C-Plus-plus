void sorted_insert(int array[], int &size, const int CAP, int value){
  if(size < CAP){
    if(array[size -1] < value){
      array[size] = value;
      size ++;
    }
    else{
      for(int i =0; i < size; i++){
        if(value < array[i]){
          for(int j = size; j > i; j--){
            array[j] = array[j-1];
          }
          array[i] = value;
          size++;
          break;
        }
      }
    }

  }
  else{
    cout << endl << endl << "Exceeded CAP" << endl;
  }

}
