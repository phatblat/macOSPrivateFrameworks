//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject
{
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;
- (void).cxx_destruct;
- (id)description;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (void)setCellStyle:(id)arg1;
- (id)cellStyle;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end

