//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSData;

@interface RDLocationInfo : NSObject
{
    CLLocation *_cachedLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) CLLocation *location;
- (id)initWithData:(id)arg1;
- (id)initWithCLLocation:(id)arg1;

@end

