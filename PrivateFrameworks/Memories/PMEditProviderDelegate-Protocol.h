//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PMEditProviderDelegate <NSObject>
- (void)editProvider:(id <PMEditProviderProtocol>)arg1 didChange:(BOOL)arg2;

@optional
- (void)editProviderWillBeginChanging;
@end

