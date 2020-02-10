//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ADNotificationBusStation, DatabaseController, GraphState, RemoteProcessingBlockADMGraph, VolumeManager;

__attribute__((visibility("hidden")))
@interface GraphManager : NSObject <NSSecureCoding>
{
    GraphState *_activeState;
    struct list<GraphState *, std::__1::allocator<GraphState *>> _todelete;
    struct unique_ptr<adm::graph::GraphBuilder, std::__1::default_delete<adm::graph::GraphBuilder>> _graphBuilder;
    struct shared_ptr<adm::graph::ParameterStorageInterface> _graphParameterStorage;
    struct shared_ptr<adm::graph::PropertyStorageInterface> _graphPropertyStorage;
    struct optional<adm::vp::ProxyFactory> _vpProxyFactory;
    RemoteProcessingBlockADMGraph *_remoteProcessingBlock;
    VolumeManager *_volumeManager;
    DatabaseController *_databaseController;
    ADNotificationBusStation *_busStation;
}

+ (BOOL)supportsSecureCoding;
+ (void)registerInternalComponents;
@property(nonatomic) __weak ADNotificationBusStation *busStation; // @synthesize busStation=_busStation;
@property(nonatomic) __weak VolumeManager *volumeManager; // @synthesize volumeManager=_volumeManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (expected_24968c28)getActiveMicrophoneConfigurationIDForPort:(unsigned long long)arg1 ioController:(unsigned long long)arg2;
- (void)cleanupObsoleteGraphs;
- (void)applyAdaptTransaction:(id)arg1 withConfigRequests:(id)arg2;
- (void)applyGraphStatesTransition:(id)arg1 withOriginalGraph:(id)arg2;
- (void)updateVolumeManager:(id)arg1 graph:(struct Graph *)arg2;
- (id)createAdaptTransactionWithRequests:(id)arg1 notificationBusStation:(id)arg2 error:(id *)arg3;
- (id)initWithDatabaseController:(id)arg1 volumeManager:(id)arg2;

@end
