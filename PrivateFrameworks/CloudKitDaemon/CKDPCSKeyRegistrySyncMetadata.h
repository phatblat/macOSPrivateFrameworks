//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSNumber, NSObject<OS_dispatch_group>;

__attribute__((visibility("hidden")))
@interface CKDPCSKeyRegistrySyncMetadata : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSNumber *_success;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (void).cxx_destruct;

@end

