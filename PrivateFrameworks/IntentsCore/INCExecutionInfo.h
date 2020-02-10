//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class INAppInfo, LSApplicationProxy, NSString, NSURL;

@interface INCExecutionInfo : NSObject <NSCopying>
{
    INAppInfo *_appInfo;
    NSString *_launchableAppBundleId;
    NSString *_displayableAppBundleId;
    NSURL *_containingAppBundleURL;
}

+ (void)initialize;
@property(readonly, copy, nonatomic) NSURL *containingAppBundleURL; // @synthesize containingAppBundleURL=_containingAppBundleURL;
@property(readonly, copy, nonatomic) NSString *displayableAppBundleId; // @synthesize displayableAppBundleId=_displayableAppBundleId;
@property(readonly, copy, nonatomic) NSString *launchableAppBundleId; // @synthesize launchableAppBundleId=_launchableAppBundleId;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL canRunOnLocalDevice;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) LSApplicationProxy *_applicationProxy;
@property(readonly, nonatomic) INAppInfo *_appInfo; // @synthesize _appInfo;
- (id)_initWithLaunchableAppBundleId:(id)arg1 displayableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3;

@end
