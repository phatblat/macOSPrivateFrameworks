//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DHKey, NGMPublicPreKey;

__attribute__((visibility("hidden")))
@interface NGMFullPrekey : NSObject
{
    DHKey *_dhKey;
    NGMPublicPreKey *_publicPrekey;
}

@property(readonly, nonatomic) NGMPublicPreKey *publicPrekey; // @synthesize publicPrekey=_publicPrekey;
@property(readonly, nonatomic) DHKey *dhKey; // @synthesize dhKey=_dhKey;
- (void).cxx_destruct;
- (BOOL)delete;
- (id)description;
- (id)pbDevicePrekey;
- (id)initWithPBPrekey:(id)arg1 error:(id *)arg2;
- (id)initWithPrekeySignedBy:(id)arg1 error:(id *)arg2;

@end
