//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SVXClientServiceConnection;

@protocol SVXClientServiceConnectionDelegate <NSObject>
- (id <SVXPerforming>)clientServiceConnection:(SVXClientServiceConnection *)arg1 performerForComponent:(long long)arg2;
- (void)clientServiceConnectionDidInvalidate:(SVXClientServiceConnection *)arg1;
@end

