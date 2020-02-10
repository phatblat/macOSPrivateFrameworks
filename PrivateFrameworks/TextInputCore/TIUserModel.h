//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIUserModeling.h"

@class NSArray, NSMutableDictionary, NSString;

@interface TIUserModel : NSObject <TIUserModeling>
{
    NSString *_inputMode;
    id <TIUserModelDataStoring> _userModelStore;
    NSMutableDictionary *_durableCounters;
    NSMutableDictionary *_userModelValuesCollection;
    NSMutableDictionary *_settingsDictionary;
    BOOL _isLoaded;
    double _timeOfLastPersist;
}

- (void).cxx_destruct;
- (void)addNumberToTransientCounter:(id)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
- (int)valueForDurableKey:(id)arg1;
- (void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
- (id)getValues:(id)arg1;
- (void)addToDurableCounter:(int)arg1 forKey:(id)arg2;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (id)dictForPowerLog;
- (BOOL)persistForDate:(id)arg1;
- (void)loadSettings;
- (id)populateSettingsDictionary;
- (void)doLoad;
- (id)valuesForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *keys;
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2;
- (void)configureDurableCounters;
- (void)configureDurableCounterForName:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
