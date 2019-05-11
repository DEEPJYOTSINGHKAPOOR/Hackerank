
    static boolean compareLists(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
            if(head1==null && head2==null){
                return true ;
            }
            if(head1==null || head2==null){
                return false ;
            }

            int count1=0;
            int count2=0;
            int count=0;
            SinglyLinkedListNode temp1=head1 ;
            SinglyLinkedListNode temp2=head2;

            while(temp1!=null){
                count1 ++ ;
                temp1=temp1.next ;
            }
            while(temp2!=null){
                count2 ++ ;
                temp2=temp2.next ;
            }
            if(count1!=count2){
                return false ;
            }
            else{
                 temp1=head1;
                 temp2=head2 ;   
                while( temp1!=null && temp2!=null && temp1.data==temp2.data ){
                    temp1=temp1.next ;
                    temp2=temp2.next ;
                    count++ ;
                }
                if(count==count1){
                    return true ;
                }
                else{
                    return false ;
                }

            }

    }
