//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/ABRemoteRecord.h>

@class NSString;

@interface ABRemoteInfo : ABRemoteRecord
{
    NSString *_meUID;
    NSString *_remoteLocation;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *remoteLocation; // @synthesize remoteLocation=_remoteLocation;
@property(copy) NSString *meUID; // @synthesize meUID=_meUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

