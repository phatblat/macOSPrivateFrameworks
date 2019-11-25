//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class DiagnosticCaseManager, DiagnosticCaseStorage, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface DiagnosticCase : NSObject <NSCoding>
{
    BOOL eventsDirty;
    BOOL payloadsDirty;
    BOOL attachmentsDirty;
    BOOL _allowIPSFileOutput;
    unsigned long long completedDiagnosticActions;
    unsigned long long expectedDiagnosticActions;
    NSMutableDictionary *_requiredActions;
    NSMutableDictionary *_requiredAttachments;
    BOOL _readyToEndSession;
    NSUUID *_caseId;
    DiagnosticCaseStorage *_caseStorage;
    NSMutableArray *_caseReports;
    NSMutableArray *_caseOutlets;
    NSMutableDictionary *_signature;
    NSMutableArray *_events;
    NSMutableArray *_payloads;
    NSMutableArray *_attachments;
    NSDictionary *_actions;
    unsigned long long _caseFlags;
    double _preferredDuration;
    DiagnosticCaseManager *_manager;
}

+ (id)signatureForCaseStorageDictionary:(id)arg1;
+ (id)signatureForCaseStorage:(id)arg1;
+ (id)generateCaseSummaryFromCaseStorageDictionary:(id)arg1;
+ (id)generateCaseSummaryDictionaryFromCaseStorage:(id)arg1;
+ (id)attachmentsFromStringRepresentation:(id)arg1;
+ (id)stringRepresentationOfAttachments:(id)arg1;
+ (id)_arrayObjectRepresentationOfJSONString:(id)arg1;
+ (id)_stringRepresentationOfJSONObject:(id)arg1 prettyPrint:(BOOL)arg2;
+ (id)_closureTypeString:(short)arg1;
+ (id)_caseDampeningTypeString:(short)arg1;
@property(retain, nonatomic) DiagnosticCaseManager *manager; // @synthesize manager=_manager;
@property(nonatomic) BOOL readyToEndSession; // @synthesize readyToEndSession=_readyToEndSession;
@property(nonatomic) double preferredDuration; // @synthesize preferredDuration=_preferredDuration;
@property(nonatomic) unsigned long long caseFlags; // @synthesize caseFlags=_caseFlags;
@property(readonly, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSDictionary *requiredAttachments; // @synthesize requiredAttachments=_requiredAttachments;
@property(readonly, nonatomic) NSMutableDictionary *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSMutableArray *caseOutlets; // @synthesize caseOutlets=_caseOutlets;
@property(readonly, nonatomic) NSMutableArray *caseReports; // @synthesize caseReports=_caseReports;
@property(readonly, nonatomic) DiagnosticCaseStorage *caseStorage; // @synthesize caseStorage=_caseStorage;
- (void).cxx_destruct;
- (BOOL)_parseCaseStorageIntoSignature:(id)arg1;
- (BOOL)_parseSignatureIntoCaseStorage:(id)arg1;
- (void)prepareForSaving;
- (BOOL)sendReports;
- (void)fixupCaseSummaryFile:(id)arg1;
- (void)summarizeCaseReport;
- (id)_caseSummaryFileName;
- (id)_generateCaseSummaryDictionary;
- (void)validateAttachments;
- (void)prepareAttachmentsForReporting;
- (void)finishedCollectingLogs;
- (void)reportGeneratorEnded:(id)arg1 reportInfo:(id)arg2 error:(id)arg3 isFinalReportGenerator:(BOOL)arg4;
- (void)startCollectingAllReports;
- (id)deParametersFromPayloads;
- (void)startCollectingDiagnosticExtensions:(id)arg1;
- (void)collectLogs;
- (void)finishCase;
- (void)prepareCase;
- (void)addGroupIdentifierToSignature;
- (BOOL)matchSignature:(id)arg1;
- (id)stringRepresentationOfSignature;
- (void)deserializeDiagnosticCaseStorageAttachments;
- (void)serializeAttachmentsToDiagnosticCaseStorage;
- (void)_addToAttachments:(id)arg1;
- (void)deserializeDiagnosticCaseStoragePayloads;
- (void)serializePayloadsToDiagnosticCaseStorage;
- (id)payloadsFromStringRepresentation;
- (id)stringRepresentationOfPayloads;
- (void)addPayload:(id)arg1;
- (void)deserializeDiagnosticCaseStorageEvents;
- (void)serializeEventsToDiagnosticCaseStorage;
- (id)eventsFromStringRepresentation;
- (id)stringRepresentationOfEvents;
- (void)addEvents:(id)arg1 forced:(BOOL)arg2;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1 forced:(BOOL)arg2;
- (void)addEvent:(id)arg1;
- (void)removeRequiredAttachmentType:(id)arg1 pattern:(id)arg2;
- (void)addRequiredAttachmentType:(id)arg1 pattern:(id)arg2;
- (void)addRequiredAction:(id)arg1 option:(id)arg2 attachmentType:(id)arg3 pattern:(id)arg4;
- (id)caseClosureTypeString;
- (short)caseStateFromString:(id)arg1;
- (id)caseStateString:(short)arg1;
@property(readonly, nonatomic) NSString *caseEffectiveProcess; // @dynamic caseEffectiveProcess;
@property(readonly, nonatomic) NSString *caseDetectedProcess; // @dynamic caseDetectedProcess;
- (id)caseProcess;
@property(readonly, nonatomic) NSString *caseSubTypeContext; // @dynamic caseSubTypeContext;
@property(readonly, nonatomic) NSString *caseSubType; // @dynamic caseSubType;
@property(readonly, nonatomic) NSString *caseType; // @dynamic caseType;
@property(readonly, nonatomic) NSString *caseDomain; // @dynamic caseDomain;
- (void)allowIPSFileOutput:(BOOL)arg1;
@property(readonly, nonatomic) BOOL writeIPSFile; // @dynamic writeIPSFile;
@property(readonly, nonatomic, getter=isRemoteTrigger) BOOL remoteTrigger;
@property(readonly, nonatomic, getter=wantsRemote) BOOL wantsRemote;
@property(readonly, nonatomic, getter=isSnapshot) BOOL snapshot; // @dynamic snapshot;
- (id)caseDampeningTypeString;
- (void)setDampeningType:(short)arg1;
@property(readonly, nonatomic) short dampeningType;
- (void)setClosureType:(short)arg1;
@property(readonly, nonatomic) short closureType; // @dynamic closureType;
@property(readonly, nonatomic) double caseClosedTime; // @dynamic caseClosedTime;
@property(readonly, nonatomic) double caseOpenedTime; // @dynamic caseOpenedTime;
- (void)noteCaseOpenedTime:(double)arg1;
- (void)noteCaseOpenedTime;
- (void)noteCaseClosedTime:(double)arg1;
- (void)noteCaseClosedTime;
- (void)setCaseState:(short)arg1;
@property(readonly, nonatomic) short caseState; // @dynamic caseState;
@property(readonly, nonatomic) NSUUID *caseId; // @synthesize caseId=_caseId;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithCaseId:(id)arg1 manager:(id)arg2;
- (id)initWithCaseStorage:(id)arg1 manager:(id)arg2;
- (id)initWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 manager:(id)arg6;

@end

