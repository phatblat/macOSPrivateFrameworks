//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FxBaseEffect.h"

@class FxImage;

@protocol FxGenerator <FxBaseEffect>
- (BOOL)renderOutput:(FxImage *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(char *)arg2 software:(char *)arg3;
@end

