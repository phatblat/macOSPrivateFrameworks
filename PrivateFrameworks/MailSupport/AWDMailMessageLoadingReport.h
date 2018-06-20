//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDMailMessage;

@interface AWDMailMessageLoadingReport : PBCodable <NSCopying>
{
    long long _timeLoadingSpinnerIsVisibleInSeconds;
    unsigned long long _timestamp;
    AWDMailMessage *_message;
    struct {
        unsigned int timeLoadingSpinnerIsVisibleInSeconds:1;
        unsigned int timestamp:1;
    } _has;
}

@property(retain, nonatomic) AWDMailMessage *message; // @synthesize message=_message;
@property(nonatomic) long long timeLoadingSpinnerIsVisibleInSeconds; // @synthesize timeLoadingSpinnerIsVisibleInSeconds=_timeLoadingSpinnerIsVisibleInSeconds;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMessage;
@property(nonatomic) BOOL hasTimeLoadingSpinnerIsVisibleInSeconds;
@property(nonatomic) BOOL hasTimestamp;
- (id)initWithMailMessage:(id)arg1 loadingSpinnerIsVisibleTimeInSeconds:(long long)arg2;

@end

