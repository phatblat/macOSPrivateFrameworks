//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AnalyticsConfigurationObserver : NSObject
{
    struct shared_ptr<(anonymous namespace)::ConfigurationObserverImpl> observer;
    NSObject<OS_dispatch_queue> *_queue;
    id <AnalyticsConfigurationObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <AnalyticsConfigurationObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)stopObservingConfigurationType:(id)arg1;
- (BOOL)startObservingConfigurationType:(id)arg1;
- (void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

