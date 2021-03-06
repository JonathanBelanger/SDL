; ********************************************************************************************************************************
;  Created:  2-FEB-2006 12:18:30 by OpenVMS SDL EV1-69     
;  Source:   8-DEC-2000 13:57:27 ISK$SYSMAN:[LAISHEV.WORK.SDL]STSDEF.SDL;1       
; ********************************************************************************************************************************
;;;(proclaim '(optimize (speed 3) (safety 0)))
 
;;;*** MODULE $stsdef ***
      
 (defconstant sts$m_success #b00000000000000000000000000000001)
 (defconstant sts$m_severity #b00000000000000000000000000000111)
 (defconstant sts$m_cond_id #b00001111111111111111111111111000)
 (defconstant sts$m_inhib_msg #b00010000000000000000000000000000)
 (defconstant sts$m_msg_no #b00000000000000001111111111111000)
 (defconstant sts$m_fac_no #b00001111111111110000000000000000)
 (defconstant sts$m_fac_sp #b00000000000000001000000000000000)
 (defconstant sts$m_cust_def #b00001000000000000000000000000000)
            
(define-alien-structure ($cond_value ( :conc-name nil))
  (sts$l_value :signed-integer 0 4)
  (sts$v_success :unsigned-integer #.(+ 0 0/8) #.(+ 0 1/8)) 
    (sts$v_severity :unsigned-integer #.(+ 0 0/8) #.(+ 0 3/8)) 
    (sts$v_cond_id :unsigned-integer #.(+ 0 3/8) #.(+ 0 28/8)) 
    (sts$v_inhib_msg :unsigned-integer #.(+ 0 28/8) #.(+ 0 29/8)) 
    (sts$v_cntrl :unsigned-integer #.(+ 0 29/8) #.(+ 0 32/8)) 
    (sts$v_status_fill3a :unsigned-integer #.(+ 0 0/8) #.(+ 0 3/8)) 
    (sts$v_msg_no :unsigned-integer #.(+ 0 3/8) #.(+ 0 16/8)) 
    (sts$v_fac_no :unsigned-integer #.(+ 0 16/8) #.(+ 0 28/8)) 
    (sts$v_status_fill3b :unsigned-integer #.(+ 0 28/8) #.(+ 0 32/8)) 
    (sts$v_status_fill4a :unsigned-integer #.(+ 0 0/8) #.(+ 0 3/8)) 
    (sts$v_code :unsigned-integer #.(+ 0 3/8) #.(+ 0 15/8)) 
    (sts$v_fac_sp :unsigned-integer #.(+ 0 15/8) #.(+ 0 16/8)) 
    (sts$v_status_fill4 :unsigned-integer #.(+ 0 16/8) #.(+ 0 27/8)) 
    (sts$v_cust_def :unsigned-integer #.(+ 0 27/8) #.(+ 0 28/8)) 
    (sts$v_status_fill4b :unsigned-integer #.(+ 0 28/8) #.(+ 0 32/8)) )
      
 (defconstant sts$k_warning 0)
 (defconstant sts$k_success 1)
 (defconstant sts$k_error 2)
 (defconstant sts$k_info 3)
 (defconstant sts$k_severe 4)
