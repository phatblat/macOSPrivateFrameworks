//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PCCEndpoint : NSObject
{
    unsigned int _fileTimeout;
    id <OSASyncProxyHandler> _delegate;
    NSArray *_deviceIds;
}

@property(readonly) NSArray *deviceIds; // @synthesize deviceIds=_deviceIds;
@property __weak id <OSASyncProxyHandler> delegate; // @synthesize delegate=_delegate;
@property unsigned int fileTimeout; // @synthesize fileTimeout=_fileTimeout;
- (void).cxx_destruct;
- (id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (id)send:(id)arg1 message:(id)arg2 error:(id *)arg3;
- (void)outreach;
- (BOOL)isDeviceNearby:(id)arg1;

@end

