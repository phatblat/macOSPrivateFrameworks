//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _MSVStreamWriterPendingData : NSObject
{
    NSData *_data;
    CDUnknownBlockType _completionHandler;
    long long _bytesWritten;
}

@property(nonatomic) long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

