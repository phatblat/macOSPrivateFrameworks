//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSServiceConnectionEndpoint;

@protocol CNUIUserActionContext <NSObject>
@property(copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property(readonly, nonatomic) id <CNUIUserActionCurator> actionCurator;
@property(readonly, nonatomic) id <CNUIUserActionRecorder> actionRecorder;
@property(readonly, nonatomic) id <CNUIUserActionDialRequestOpener> dialRequestOpener;
@property(readonly, nonatomic) id <CNUIUserActionUserActivityOpener> userActivityOpener;
@property(readonly, nonatomic) id <CNUIUserActionURLOpener> urlOpener;
@end

