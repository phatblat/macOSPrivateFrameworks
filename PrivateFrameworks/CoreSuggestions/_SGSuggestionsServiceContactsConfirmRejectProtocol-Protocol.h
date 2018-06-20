//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CNContact, CNLabeledValue, SGRealtimeContact, SGRecordId;

@protocol _SGSuggestionsServiceContactsConfirmRejectProtocol
- (void)rejectCuratedContactDetail:(CNLabeledValue *)arg1 from:(CNContact *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (BOOL)rejectContactDetailRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)rejectContactDetailRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)confirmContactDetailRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)confirmContactDetailRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)rejectRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)rejectRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)confirmRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)confirmRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)rejectContact:(SGRealtimeContact *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)confirmContact:(SGRealtimeContact *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

