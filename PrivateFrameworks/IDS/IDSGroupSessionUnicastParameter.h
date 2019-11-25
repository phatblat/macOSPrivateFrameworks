//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding>
{
    NSString *_groupSessionID;
    unsigned long long _participantID;
    unsigned long long _connectionIndex;
    long long _dataMode;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(readonly, nonatomic) unsigned long long connectionIndex; // @synthesize connectionIndex=_connectionIndex;
@property(readonly, nonatomic) unsigned long long participantID; // @synthesize participantID=_participantID;
@property(readonly, nonatomic) NSString *groupSessionID; // @synthesize groupSessionID=_groupSessionID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGroupSessionID:(id)arg1 participantID:(unsigned long long)arg2 dataMode:(long long)arg3 connectionIndex:(unsigned long long)arg4;

@end

