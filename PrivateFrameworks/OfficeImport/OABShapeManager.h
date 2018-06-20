//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OABShapeBaseManager.h>

#import "OABPropertiesManager.h"

@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager>
{
    struct EshShape *mShape;
}

- (BOOL)hidden;
- (BOOL)textPathStrikethrough;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathUnderline;
- (BOOL)textPathItalic;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (int)textPathTextAlignment;
- (id)textPathUnicodeString;
- (BOOL)isTextPath;
- (BOOL)isShadowed;
- (BOOL)isStroked;
- (BOOL)isFilled;
- (BOOL)isShadowOK;
- (BOOL)isStrokeOK;
- (BOOL)isFillOK;
- (id)initWithShape:(struct EshShape *)arg1;
- (id)initWithShape:(struct EshShape *)arg1 masterShape:(struct EshShape *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

