//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface GEOTransitRouteUpdater : NSObject
{
    id <GEOTransitRouteUpdaterDelegate> _delegate;
    BOOL _active;
    NSSet *_requests;
}

@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(copy, nonatomic) NSSet *requests; // @synthesize requests=_requests;
@property(nonatomic) __weak id <GEOTransitRouteUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2;

@end
