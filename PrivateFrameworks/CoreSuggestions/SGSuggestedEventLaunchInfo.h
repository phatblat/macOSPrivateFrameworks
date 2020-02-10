//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class INIntent, NSString, NSURL, NSUserActivity;

@interface SGSuggestedEventLaunchInfo : NSObject <NSSecureCoding>
{
    NSString *_localizedShowInString;
    NSString *_userActivityString;
    NSString *_bundleId;
    INIntent *_intent;
    NSURL *_sourceURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *userActivityString; // @synthesize userActivityString=_userActivityString;
@property(readonly, nonatomic) NSString *localizedShowInString; // @synthesize localizedShowInString=_localizedShowInString;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserActivity *userActivity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 localizedShowInString:(id)arg2 userActivity:(id)arg3 intent:(id)arg4 sourceURL:(id)arg5;

@end
