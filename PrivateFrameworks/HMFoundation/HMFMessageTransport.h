//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMFMessageTransport : HMFObject
{
    id <HMFMessageTransportDelegate> _delegate;
}

@property __weak id <HMFMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

