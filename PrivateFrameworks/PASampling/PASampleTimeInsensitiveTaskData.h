//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PASerializable.h"

@class NSArray, NSMutableSet, NSSet, NSString, NSUUID, PASampleTaskData, PASampleTaskDataPrivateData;

@interface PASampleTimeInsensitiveTaskData : NSObject <PASerializable>
{
    int _pid;
    NSString *_name;
    NSString *_bundleName;
    unsigned long long _uniquePid;
    NSString *_mainBinaryPath;
    NSArray *_imageInfos;
    int _ppid;
    int _rpid;
    unsigned int _uid;
    struct _CSArchitecture _architecture;
    BOOL _isUnresponsive;
    double _timeOfLastResponse;
    BOOL _usesSuddenTermination;
    BOOL _allowsIdleExit;
    BOOL _wqAndDirtyAreStatic;
    BOOL _isDirty;
    BOOL _workQueueExceededConstrainedThreadLimit;
    BOOL _workQueueExceededTotalThreadLimit;
    BOOL _isThirdParty;
    BOOL _gatheredNonTimeCriticalAuxiliaryInfoFromLiveSystem;
    BOOL _gatheredTimeCriticalAuxiliaryInfoFromLiveSystem;
    BOOL _didExec;
    BOOL _isTranslocated;
    double _mostRecentTimeSamplingOnlyMainThread;
    NSMutableSet *_rootUserFrames;
    PASampleTaskDataPrivateData *_cachedPrivateData;
    NSSet *_cachedDonatingUniqueIds;
    PASampleTaskData *mostRecentTask;
    long long mostRecentTaskSampleIndex;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
@property(readonly) BOOL workQueueExceededTotalThreadLimit; // @synthesize workQueueExceededTotalThreadLimit=_workQueueExceededTotalThreadLimit;
@property(readonly) BOOL workQueueExceededConstrainedThreadLimit; // @synthesize workQueueExceededConstrainedThreadLimit=_workQueueExceededConstrainedThreadLimit;
@property(readonly) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(readonly) BOOL wqAndDirtyAreStatic; // @synthesize wqAndDirtyAreStatic=_wqAndDirtyAreStatic;
@property double mostRecentTimeSamplingOnlyMainThread; // @synthesize mostRecentTimeSamplingOnlyMainThread=_mostRecentTimeSamplingOnlyMainThread;
@property BOOL didExec; // @synthesize didExec=_didExec;
@property(readonly) BOOL isTranslocated; // @synthesize isTranslocated=_isTranslocated;
@property(readonly) BOOL isThirdParty; // @synthesize isThirdParty=_isThirdParty;
@property(readonly) BOOL allowsIdleExit; // @synthesize allowsIdleExit=_allowsIdleExit;
@property(readonly) BOOL usesSuddenTermination; // @synthesize usesSuddenTermination=_usesSuddenTermination;
@property(readonly) double timeOfLastResponse; // @synthesize timeOfLastResponse=_timeOfLastResponse;
@property(readonly) BOOL isUnresponsive; // @synthesize isUnresponsive=_isUnresponsive;
@property(readonly) NSArray *imageInfos; // @synthesize imageInfos=_imageInfos;
@property(retain) NSSet *cachedDonatingUniqueIds; // @synthesize cachedDonatingUniqueIds=_cachedDonatingUniqueIds;
@property(retain) PASampleTaskDataPrivateData *cachedPrivateData; // @synthesize cachedPrivateData=_cachedPrivateData;
@property(readonly) NSString *mainBinaryPath; // @synthesize mainBinaryPath=_mainBinaryPath;
@property(readonly) struct _CSArchitecture architecture; // @synthesize architecture=_architecture;
@property(readonly) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long uniquePid; // @synthesize uniquePid=_uniquePid;
@property(readonly) unsigned int uid; // @synthesize uid=_uid;
@property(readonly) int rpid; // @synthesize rpid=_rpid;
@property(readonly) int ppid; // @synthesize ppid=_ppid;
@property(readonly) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)addImageInfos:(id)arg1;
- (BOOL)correspondsToUniquePid:(unsigned long long)arg1 withName:(const char *)arg2 withLoadInfos:(const struct dyld_uuid_info_64 *)arg3 numLoadInfos:(unsigned int)arg4;
- (BOOL)_matchesName:(const char *)arg1;
- (BOOL)correspondsToStackshotTask:(id)arg1;
- (id)addUserStack:(id)arg1;
- (void)_gatherTimeCriticalAuxiliaryInfoFromLiveSystemIsLate:(BOOL)arg1;
- (void)_gatherNonTimeCriticalAuxiliaryInfoFromLiveSystemWithSampleTimeSeriesDataStore:(id)arg1;
- (BOOL)gatherLoadInfoWithSampleTimeSeriesDataStore:(id)arg1;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 withLoadInfos:(const struct dyld_uuid_info_64 *)arg2 numLoadInfos:(unsigned int)arg3 pid:(int)arg4 andMachineArchitecture:(struct _CSArchitecture)arg5;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 withLoadInfos:(const struct dyld_uuid_info_64 *)arg2 numLoadInfos:(unsigned int)arg3 andMachineArchitecture:(struct _CSArchitecture)arg4;
- (id)initWithStackshotTask:(id)arg1 andMachineArchitecture:(struct _CSArchitecture)arg2;
@property(readonly) unsigned long long mainBinaryOffset;
@property(readonly) NSUUID *mainBinaryUuid;
- (id)rootUserFrames;
- (void)guessArchitectureGivenMachineArchitecture:(struct _CSArchitecture)arg1;
- (void)setArchitecture:(struct _CSArchitecture)arg1;
- (void)setNameWithCStr:(const char *)arg1;
- (id)initWithPid:(int)arg1 andUniqueID:(unsigned long long)arg2 andName:(const char *)arg3;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)_initWithSerializedTimeInsensitiveTaskData:(const CDStruct_837e78c1 *)arg1;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

