//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RWIServiceConnection;

@protocol RWIServiceConnectionDelegate <NSObject>

@optional
- (void)serviceConnectionEstablished:(RWIServiceConnection *)arg1;
- (void)serviceConnectionDidClose:(RWIServiceConnection *)arg1;
@end
