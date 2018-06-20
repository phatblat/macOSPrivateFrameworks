//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDReference, EDString;

@interface EDHyperlink : NSObject
{
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;
- (void).cxx_destruct;
- (id)description;
- (void)setType:(int)arg1;
- (int)type;
- (void)setReference:(id)arg1;
- (id)reference;
- (void)setToolTip:(id)arg1;
- (id)toolTip;
- (void)setTextMark:(id)arg1;
- (id)textMark;
- (void)setDescriptionText:(id)arg1;
- (id)descriptionText;
- (void)setDosPath:(id)arg1;
- (id)dosPath;
- (void)setPath:(id)arg1;
- (id)path;

@end
