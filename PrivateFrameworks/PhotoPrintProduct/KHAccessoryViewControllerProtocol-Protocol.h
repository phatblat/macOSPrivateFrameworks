//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol KHAccessoryViewControllerProtocol <NSObject>
@property(readonly, nonatomic) BOOL isAccessoryFloating;
@property(nonatomic) __weak id <KHAccessoryViewContainerProtocol> accessoryViewContainer;
@property(nonatomic) long long accessoryViewState;
@property(nonatomic) double expandedAccessoryLength;
@property(readonly, nonatomic) double collapsedAccessoryLength;
@property(readonly, nonatomic) unsigned long long preferredAccessoryEdge;

@optional
@property(readonly, nonatomic) unsigned long long accessoryAnimationOptions;
@property(readonly, nonatomic) double accessoryAnimationDuration;
@property(readonly, nonatomic) double maximumAccessoryLength;
@property(readonly, nonatomic) double minimumAccessoryLength;
@end

