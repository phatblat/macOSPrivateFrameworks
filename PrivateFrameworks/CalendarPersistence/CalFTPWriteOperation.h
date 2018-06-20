//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalFTPOperation.h>

@class NSData;

@interface CalFTPWriteOperation : CalFTPOperation
{
    NSData *_data;
    long long _numberOfBytesWritten;
    struct __CFWriteStream *_writeStream;
}

@property(nonatomic) struct __CFWriteStream *writeStream; // @synthesize writeStream=_writeStream;
@property(nonatomic) long long numberOfBytesWritten; // @synthesize numberOfBytesWritten=_numberOfBytesWritten;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)writeStream:(struct __CFWriteStream *)arg1 receivedEventWithType:(unsigned long long)arg2;
- (void)setProperties;
- (void)cancel;
- (void)start;
- (void)tearDownStream;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 data:(id)arg4;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3;

@end

