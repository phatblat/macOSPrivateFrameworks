//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EBNameTable : NSObject
{
}

+ (struct XlNameTable *)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2;
+ (void)readFromState:(id)arg1;
+ (struct XlName *)xlNameFromEDName:(id)arg1 state:(id)arg2;
+ (id)edNameFromXlName:(struct XlName *)arg1 name:(struct OcText)arg2 state:(id)arg3;

@end

