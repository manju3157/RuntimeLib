//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/ExceptionsAttribute.java
//
//  Created by chinthan on 12/2/13.
//

#ifndef _ExceptionsAttribute_H_
#define _ExceptionsAttribute_H_

@class NSMutableArray;


#import "Attribute.h"

@interface ExceptionsAttribute : Attribute {
 @public
  NSMutableArray *__ExceptionClasses_;
}

- (NSMutableArray *)getExceptionClasses;
- (void)setExceptionClassesWithNSStringArray:(NSMutableArray *)value;
- (id)init;
@end

//J2OBJC_FIELD_SETTER(ExceptionsAttribute, __ExceptionClasses_, NSMutableArray *)

#endif // _ExceptionsAttribute_H_
