//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WPDPersistence : NSObject
{
    BOOL _isRangingEnabled;
    BOOL _needsInit;
    BOOL _systemFirstUnlocked;
    NSString *_bootUUID;
}

@property(retain, nonatomic) NSString *bootUUID; // @synthesize bootUUID=_bootUUID;
@property(nonatomic) BOOL systemFirstUnlocked; // @synthesize systemFirstUnlocked=_systemFirstUnlocked;
@property(nonatomic) BOOL needsInit; // @synthesize needsInit=_needsInit;
- (void).cxx_destruct;
- (void)writeStringProperty:(id)arg1 Value:(id)arg2;
- (id)readStringPropertyValue:(id)arg1;
- (void)writeBoolProperty:(id)arg1 Value:(BOOL)arg2;
- (BOOL)readBoolPropertyValue:(id)arg1;
- (void)deletePropertyValue:(id)arg1;
- (void)synchronisePrefs;
- (void)firstUnlockedWithEvent:(BOOL)arg1;
- (id)currentBootSessionUUID;
@property(nonatomic) BOOL isRangingEnabled; // @synthesize isRangingEnabled=_isRangingEnabled;
- (void)dealloc;
- (id)init;

@end
