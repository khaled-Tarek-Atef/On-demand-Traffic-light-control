/*
 * bit_manipulation.h
 *
 * Created: 10/5/2022 5:30:20 PM
 * Author: khaled
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_

#define CLEAR_BIT(REG,NUM)  REG&=~(1<<NUM)
#define SET_BIT(REG,NUM)    REG|=(1<<NUM)
#define TOGGLE_BIT(REG,NUM) REG^=(1<<NUM)
#define READ_BIT(REG,NUM)   ((REG&(1<<NUM))>>NUM)

#endif /* BIT_MANIPULATION_H_ */