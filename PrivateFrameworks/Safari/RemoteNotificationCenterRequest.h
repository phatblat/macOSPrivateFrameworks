//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RemoteNotificationCenterRequest : NSObject
{
    NSString *_websiteIdentifier;
}

@property(readonly, nonatomic) NSString *websiteIdentifier; // @synthesize websiteIdentifier=_websiteIdentifier;
- (void).cxx_destruct;
- (void)centerDelegateDidFinishRequest:(id)arg1;
- (id)initWithWebsiteIdentifier:(id)arg1;

@end

