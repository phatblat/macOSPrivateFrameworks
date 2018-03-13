//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPArchiveRecordsResponse, CKDPAssetUploadTokenRetrieveResponse, CKDPBundlesForContainerResponse, CKDPCodeFunctionInvokeResponse, CKDPDeleteCommentResponse, CKDPDeleteContainerResponse, CKDPFetchArchivedRecordsResponse, CKDPGetCommentResponse, CKDPGetCommentsResponse, CKDPGetLikesResponse, CKDPLikeResponse, CKDPMescalCertificateResponse, CKDPMescalSessionInfoResponse, CKDPMescalSignatureResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPOperation, CKDPPostCommentResponse, CKDPPulseResponse, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordResolveTokenResponse, CKDPRecordRetrieveAncestorsResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareDeleteResponse, CKDPShareRetrieveResponse, CKDPShareSaveResponse, CKDPShareTokenDeleteResponse, CKDPShareTokenRetrieveResponse, CKDPShareTokenSaveResponse, CKDPShareVettingInitiateResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUnlikeResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperation : PBCodable <NSCopying>
{
    CKDPArchiveRecordsResponse *_archiveRecordsResponse;
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;
    CKDPBundlesForContainerResponse *_bundlesForContainerResponse;
    CKDPDeleteCommentResponse *_deleteCommentResponse;
    CKDPDeleteContainerResponse *_deleteContainerResponse;
    CKDPFetchArchivedRecordsResponse *_fetchArchivedRecordsResponse;
    CKDPCodeFunctionInvokeResponse *_functionInvokeResponse;
    CKDPGetCommentResponse *_getCommentResponse;
    CKDPGetCommentsResponse *_getCommentsResponse;
    CKDPGetLikesResponse *_getLikesResponse;
    CKDPLikeResponse *_likeResponse;
    CKDPMescalCertificateResponse *_mescalCertificateResponse;
    CKDPMescalSessionInfoResponse *_mescalSessionInfoResponse;
    CKDPMescalSignatureResponse *_mescalSignatureResponse;
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;
    CKDPNotificationSyncResponse *_notificationSyncResponse;
    unsigned int _operationCost;
    CKDPPostCommentResponse *_postCommentResponse;
    CKDPPulseResponse *_pulseResponse;
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;
    CKDPRecordDeleteResponse *_recordDeleteResponse;
    CKDPRecordResolveTokenResponse *_recordResolveTokenResponse;
    CKDPRecordRetrieveAncestorsResponse *_recordRetrieveAncestorsResponse;
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse *_recordSaveResponse;
    CKDPOperation *_response;
    CKDPResponseOperationResult *_result;
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;
    CKDPShareAcceptResponse *_shareAcceptResponse;
    CKDPShareDeleteResponse *_shareDeleteResponse;
    CKDPShareRetrieveResponse *_shareRetrieveResponse;
    CKDPShareSaveResponse *_shareSaveResponse;
    CKDPShareTokenDeleteResponse *_shareTokenDeleteResponse;
    CKDPShareTokenRetrieveResponse *_shareTokenRetrieveResponse;
    CKDPShareTokenSaveResponse *_shareTokenSaveResponse;
    CKDPShareVettingInitiateResponse *_shareVettingInitiateResponse;
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;
    CKDPUnlikeResponse *_unlikeResponse;
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse *_userQueryResponse;
    CKDPUserRetrieveResponse *_userRetrieveResponse;
    CKDPWebAuthTokenRetrieveResponse *_webAuthTokenRetrieveResponse;
    CKDPZoneDeleteResponse *_zoneDeleteResponse;
    CKDPZoneRetrieveChangesResponse *_zoneRetrieveChangesResponse;
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;
    CKDPZoneSaveResponse *_zoneSaveResponse;
    struct {
        unsigned int operationCost:1;
    } _has;
}

@property(retain, nonatomic) CKDPResponseOperationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) CKDPOperation *response; // @synthesize response=_response;
@property(nonatomic) unsigned int operationCost; // @synthesize operationCost=_operationCost;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasResult;
@property(readonly, nonatomic) BOOL hasResponse;
@property(nonatomic) BOOL hasOperationCost;
@property(retain, nonatomic) CKDPShareSaveResponse *shareSaveResponse;
@property(readonly, nonatomic) BOOL hasShareSaveResponse;
@property(retain, nonatomic) CKDPShareRetrieveResponse *shareRetrieveResponse;
@property(readonly, nonatomic) BOOL hasShareRetrieveResponse;
@property(retain, nonatomic) CKDPShareDeleteResponse *shareDeleteResponse;
@property(readonly, nonatomic) BOOL hasShareDeleteResponse;
@property(retain, nonatomic) CKDPShareAcceptResponse *shareAcceptResponse;
@property(readonly, nonatomic) BOOL hasShareAcceptResponse;
@property(retain, nonatomic) CKDPShareTokenSaveResponse *shareTokenSaveResponse;
@property(readonly, nonatomic) BOOL hasShareTokenSaveResponse;
@property(retain, nonatomic) CKDPShareTokenRetrieveResponse *shareTokenRetrieveResponse;
@property(readonly, nonatomic) BOOL hasShareTokenRetrieveResponse;
@property(retain, nonatomic) CKDPShareTokenDeleteResponse *shareTokenDeleteResponse;
@property(readonly, nonatomic) BOOL hasShareTokenDeleteResponse;
@property(retain, nonatomic) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property(readonly, nonatomic) BOOL hasShareVettingInitiateResponse;
@property(retain, nonatomic) CKDPZoneSaveResponse *zoneSaveResponse;
@property(readonly, nonatomic) BOOL hasZoneSaveResponse;
@property(retain, nonatomic) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property(readonly, nonatomic) BOOL hasZoneRetrieveResponse;
@property(retain, nonatomic) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property(readonly, nonatomic) BOOL hasZoneDeleteResponse;
@property(retain, nonatomic) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property(readonly, nonatomic) BOOL hasZoneRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordSaveResponse *recordSaveResponse;
@property(readonly, nonatomic) BOOL hasRecordSaveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property(readonly, nonatomic) BOOL hasRecordRetrieveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property(readonly, nonatomic) BOOL hasRecordRetrieveVersionsResponse;
@property(retain, nonatomic) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property(readonly, nonatomic) BOOL hasRecordRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordDeleteResponse *recordDeleteResponse;
@property(readonly, nonatomic) BOOL hasRecordDeleteResponse;
@property(retain, nonatomic) CKDPRecordRetrieveAncestorsResponse *recordRetrieveAncestorsResponse;
@property(readonly, nonatomic) BOOL hasRecordRetrieveAncestorsResponse;
@property(retain, nonatomic) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property(readonly, nonatomic) BOOL hasRecordResolveTokenResponse;
@property(retain, nonatomic) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property(readonly, nonatomic) BOOL hasFetchArchivedRecordsResponse;
@property(retain, nonatomic) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property(readonly, nonatomic) BOOL hasUserAvailableQuotaResponse;
@property(retain, nonatomic) CKDPUserRetrieveResponse *userRetrieveResponse;
@property(readonly, nonatomic) BOOL hasUserRetrieveResponse;
@property(retain, nonatomic) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property(readonly, nonatomic) BOOL hasQueryRetrieveResponse;
@property(retain, nonatomic) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property(readonly, nonatomic) BOOL hasAssetUploadTokenRetrieveResponse;
@property(retain, nonatomic) CKDPDeleteContainerResponse *deleteContainerResponse;
@property(readonly, nonatomic) BOOL hasDeleteContainerResponse;
@property(retain, nonatomic) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property(readonly, nonatomic) BOOL hasBundlesForContainerResponse;
@property(retain, nonatomic) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property(readonly, nonatomic) BOOL hasWebAuthTokenRetrieveResponse;
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property(readonly, nonatomic) BOOL hasFunctionInvokeResponse;
@property(retain, nonatomic) CKDPPostCommentResponse *postCommentResponse;
@property(readonly, nonatomic) BOOL hasPostCommentResponse;
@property(retain, nonatomic) CKDPGetCommentsResponse *getCommentsResponse;
@property(readonly, nonatomic) BOOL hasGetCommentsResponse;
@property(retain, nonatomic) CKDPGetCommentResponse *getCommentResponse;
@property(readonly, nonatomic) BOOL hasGetCommentResponse;
@property(retain, nonatomic) CKDPDeleteCommentResponse *deleteCommentResponse;
@property(readonly, nonatomic) BOOL hasDeleteCommentResponse;
@property(retain, nonatomic) CKDPLikeResponse *likeResponse;
@property(readonly, nonatomic) BOOL hasLikeResponse;
@property(retain, nonatomic) CKDPUnlikeResponse *unlikeResponse;
@property(readonly, nonatomic) BOOL hasUnlikeResponse;
@property(retain, nonatomic) CKDPGetLikesResponse *getLikesResponse;
@property(readonly, nonatomic) BOOL hasGetLikesResponse;
@property(retain, nonatomic) CKDPPulseResponse *pulseResponse;
@property(readonly, nonatomic) BOOL hasPulseResponse;
@property(retain, nonatomic) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property(readonly, nonatomic) BOOL hasSubscriptionCreateResponse;
@property(retain, nonatomic) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property(readonly, nonatomic) BOOL hasSubscriptionRetrieveResponse;
@property(retain, nonatomic) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property(readonly, nonatomic) BOOL hasSubscriptionDeleteResponse;
@property(retain, nonatomic) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property(readonly, nonatomic) BOOL hasArchiveRecordsResponse;
@property(retain, nonatomic) CKDPUserQueryResponse *userQueryResponse;
@property(readonly, nonatomic) BOOL hasUserQueryResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsUpdateResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsResetResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsBatchLookupResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsRetrieveResponse;
@property(retain, nonatomic) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property(readonly, nonatomic) BOOL hasTokenRegistrationResponse;
@property(retain, nonatomic) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property(readonly, nonatomic) BOOL hasTokenUnregistrationResponse;
@property(retain, nonatomic) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property(readonly, nonatomic) BOOL hasSetBadgeCountResponse;
@property(retain, nonatomic) CKDPNotificationSyncResponse *notificationSyncResponse;
@property(readonly, nonatomic) BOOL hasNotificationSyncResponse;
@property(retain, nonatomic) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property(readonly, nonatomic) BOOL hasNotificationMarkReadResponse;
@property(retain, nonatomic) CKDPMescalCertificateResponse *mescalCertificateResponse;
@property(readonly, nonatomic) BOOL hasMescalCertificateResponse;
@property(retain, nonatomic) CKDPMescalSessionInfoResponse *mescalSessionInfoResponse;
@property(readonly, nonatomic) BOOL hasMescalSessionInfoResponse;
@property(retain, nonatomic) CKDPMescalSignatureResponse *mescalSignatureResponse;
@property(readonly, nonatomic) BOOL hasMescalSignatureResponse;

@end

