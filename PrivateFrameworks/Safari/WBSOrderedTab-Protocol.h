//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol WBSOrderedTab <NSObject>
@property(readonly, nonatomic) double lastActivationTime;
@property(readonly, nonatomic, getter=isClosing) BOOL closing;
@property(readonly, nonatomic) BOOL shouldSelectOriginatingTabWhenClosed;
@property(readonly, nonatomic) BOOL isPinnedTab;
@property(readonly, nonatomic) NSString *windowIdentifier;
@property(readonly, nonatomic) NSArray *ancestorTabIdentifiers;
@property(readonly, nonatomic) NSString *identifier;
@end
