//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSData;

@interface SISchemaEnabledStatus : PBCodable
{
    BOOL _assistantEnabled;
    BOOL _dictationEnabled;
    BOOL _hardwareButtonEnabled;
    BOOL _heySiriEnabled;
    BOOL _assistantOnLockscreen;
    BOOL _raiseToSpeakEnabled;
    BOOL _spokenNotificationsEnabled;
    BOOL _hasHomekitHome;
    int _shortcutsAvailable;
    int _dataSharingOptInStatus;
}

@property(nonatomic) int dataSharingOptInStatus; // @synthesize dataSharingOptInStatus=_dataSharingOptInStatus;
@property(nonatomic) int shortcutsAvailable; // @synthesize shortcutsAvailable=_shortcutsAvailable;
@property(nonatomic) BOOL hasHomekitHome; // @synthesize hasHomekitHome=_hasHomekitHome;
@property(nonatomic) BOOL spokenNotificationsEnabled; // @synthesize spokenNotificationsEnabled=_spokenNotificationsEnabled;
@property(nonatomic) BOOL raiseToSpeakEnabled; // @synthesize raiseToSpeakEnabled=_raiseToSpeakEnabled;
@property(nonatomic) BOOL assistantOnLockscreen; // @synthesize assistantOnLockscreen=_assistantOnLockscreen;
@property(nonatomic) BOOL heySiriEnabled; // @synthesize heySiriEnabled=_heySiriEnabled;
@property(nonatomic) BOOL hardwareButtonEnabled; // @synthesize hardwareButtonEnabled=_hardwareButtonEnabled;
@property(nonatomic) BOOL dictationEnabled; // @synthesize dictationEnabled=_dictationEnabled;
@property(nonatomic) BOOL assistantEnabled; // @synthesize assistantEnabled=_assistantEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
