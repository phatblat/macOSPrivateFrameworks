//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFLSMMap;

@interface WFJudge : NSObject
{
    WFLSMMap *map;
}

+ (id)defaultJudge;
+ (id)defaultLSMMapPath;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id *)arg4 pageTitle:(id *)arg5;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id *)arg3 pageTitle:(id *)arg4;
- (id)_pronounceOnWebpage:(id)arg1;
- (void)dealloc;
- (id)initWithMap:(id)arg1;

@end

