//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, PPSManager;

@interface KHCloudServiceManager : NSObject
{
    BOOL _cloudKitIsAvailable;
    NSString *_container;
    NSString *_zone;
    PPSManager *_ppsManager;
}

+ (id)_ppsManagersByIdentifier;
+ (id)cloudServiceManagersByIdentifier;
@property(readonly, nonatomic) PPSManager *ppsManager; // @synthesize ppsManager=_ppsManager;
@property(readonly, nonatomic) BOOL cloudKitIsAvailable; // @synthesize cloudKitIsAvailable=_cloudKitIsAvailable;
@property(retain, nonatomic) NSString *zone; // @synthesize zone=_zone;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)die;
@property(readonly, nonatomic) NSURL *ppsManagerIdentifier;
- (id)initWithPPSManager:(id)arg1;

@end
