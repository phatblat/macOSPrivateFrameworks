//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFTMeter;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVCRateControlConfig {
    unsigned int mode;
    unsigned int localRadioAccessTechnology;
    unsigned int remoteRadioAccessTechnology;
    unsigned int maxBitrate;
    unsigned int minBitrate;
};

struct AudioBufferList;

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CannedVideoCapturePrivate {
    struct _opaque_pthread_mutex_t _field1;
    int _field2;
    id _field3;
    int _field4;
    struct OpaqueCMClock *_field5;
    char _field6;
    char _field7;
    struct OpaqueFigThread *_field8;
    char _field9;
    struct _opaque_pthread_mutex_t _field10;
    struct _opaque_pthread_cond_t _field11;
    struct OpaqueFigThread *_field12;
    char _field13;
    struct _opaque_pthread_mutex_t _field14;
    struct _opaque_pthread_cond_t _field15;
    struct _opaque_pthread_mutex_t _field16;
    struct Frame *_field17;
    int _field18;
};

struct ConnectionStats {
    unsigned char totalPacketsReceived;
    unsigned char connectionStats[2];
    unsigned char currentIndex;
    double startTime;
};

struct ConnectionStatsHistory {
    unsigned char latestConnectionStatsIndex;
    unsigned char totalPacketsReceived[5];
    unsigned char connectionStats[2][5];
    unsigned char connectionStatsRatio[2][5];
};

struct DSPSplitComplex {
    float *realp;
    float *imagp;
};

struct Frame;

struct OWRDList {
    double time[100];
    double owrd[100];
    int frontIndex;
    int rearIndex;
    int size;
};

struct OpaqueAudioConverter;

struct OpaqueCMClock;

struct OpaqueCMIOGraph;

struct OpaqueFigThread;

struct SoundDec_t {
    struct AudioStreamBasicDescription _field1;
    struct AudioStreamBasicDescription _field2;
    int _field3;
    int _field4;
    struct OpaqueAudioConverter *_field5;
    char *_field6;
    int _field7;
    struct AudioStreamPacketDescription _field8;
    struct AudioBufferList *_field9;
    struct AudioBufferList *_field10;
    char *_field11;
    char *_field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    unsigned char _field17;
    int _field18;
    int _field19;
    unsigned int _field20;
    unsigned int _field21;
};

struct VCAudioClientSettings {
    char isValid;
    char enableAudioPreWarming;
    int operatingMode;
    int deviceRole;
};

struct VCRateControlAlgorithmConfig {
    unsigned int *tierBitrates;
    int initialTierIndex;
    int maxTierIndex;
    int minTierIndex;
    int lowestNonEmergencyTierIndex;
    int rampUpTierNumber;
    int rampDownTierNumber;
    int rampUpAdditionalTierAtInitial;
    int rampDownAdditionalTierAtInitial;
    double rampDownNOWRDThreshold;
    double rampDownNOWRDAccThreshold;
    double rampDownAggressiveNOWRDThreshold;
    double rampDownAggressiveNOWRDAccThreshold;
    double rampDownConstantOWRDDuration;
    double rampDownOvershootDuration;
    double rampDownOvershootNextTierRatio;
    double rampUpFrozenDuration;
    double rampUpSettleDuration;
    double rampUpOWRDThreshold;
    double rampUpNOWRDThreshold;
    double rampUpNOWRDAccThreshold;
    double rampUpOverBandwidthCalmDuration;
    int rampUpOverBandwidthTierNumber;
    int rampDownLossEventThreshold;
    double rampUpRateLimitedRatio;
    double unstableRateLimitedDuration;
    double congestionWaitDuration;
    double owrdWindowDuration;
    double owrdShortWindowDuration;
    double minimumNOWRDTimeDifference;
    double owrdInitialRampUpReadyDuration;
    unsigned int owrdHistorySize;
    unsigned int owrdMininumHistorySize;
    unsigned int fastRampDownBitrateRange;
    unsigned int fastRampUpBitrateRange;
    char receivedBandwidthEstimationEnabled;
    char basebandAdaptationEnabled;
    char rateLimitedEnabled;
    int stabilizationScheme;
    double rampDownNBDCDThreshold;
    double rampDownAggressiveNBDCDThreshold;
    double rampDownNormalizedQueuingDelayThreshold;
    double rampDownMediumQueuingDelayThreshold;
    double rampDownHighQueuingDelayThreshold;
    double rampDownEmergencyTierCoolDownTime;
    double rampUpNBDCDThreshold;
    double rampUpQueuingDelayThreshold;
    double rampUpNBDCDCoolDownTime;
    double rampUpAudioFractionCoolDownTime;
    double autoResumeDurationAfterPaused;
};

struct VCRateControlMediaSuggestion {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
};

struct VCStatisticsStatsHistoryElement {
    unsigned char linkID;
    double statsUpdateTime;
    unsigned int statsTimestamp;
    unsigned int totalPacketSent;
    unsigned int totalPacketReceived;
    unsigned long long totalByteSent;
    unsigned long long totalByteReceived;
    unsigned long long totalByteServerStatsUsed;
};

struct VoiceIOFarEndVersionInfo {
    unsigned char farEndHwModel[64];
    unsigned char farEndOSVersion[64];
    unsigned int farEndAUVersion;
};

struct _AVCAudioPowerSpectrumMeterConfig {
    long long _field1;
    unsigned int _field2;
    unsigned short _field3;
    double _field4;
};

struct _CCCryptor;

struct _METER_INFO {
    char frequencyMeteringEnabled;
    FFTMeter *fftMeter;
};

struct _RTCPPacketList {
    union tagNTP _field1;
    unsigned char _field2;
    struct tagRTCPPACKET *_field3[10];
    unsigned char _field4[1472];
    unsigned int _field5;
    unsigned char _field6[1472];
};

struct _RTCP_RECEPTION_REPORT {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned char _field9;
};

struct _RTCP_SEND_CONTROL_PARAMETERS {
    unsigned int _field1;
    int _field2;
    char *_field3;
    unsigned long long _field4;
    unsigned char _field5;
    unsigned short *_field6;
    int _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned int _field10;
    struct _RTCP_RECEPTION_REPORT *_field11;
    unsigned char _field12;
};

struct _VCAudioEndpointData {
    struct SoundDec_t *converter;
    struct opaqueVCAudioBufferList *converterBuffer;
};

struct _VCAudioIOControllerIOState {
    char timestampInitialized;
    double lastHostTime;
    unsigned int lastInputTimestamp;
    unsigned int lastInputSampleCount;
    double lastBlockSize;
    unsigned long long lastTimestamp;
};

struct _VCAudioIOControllerTime {
    unsigned int _field1;
    unsigned long long _field2;
};

struct _VCAudioPowerSpectrumChannel {
    unsigned int _field1;
    float *_field2;
    float *_field3;
    float *_field4;
    float *_field5;
    struct vDSP_DFT_SetupStruct *_field6;
    struct DSPSplitComplex _field7;
    float *_field8;
    float _field9;
    float *_field10;
    float *_field11;
    id _field12;
};

struct _VCBitrateConfiguration {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
};

struct _VCHardwareConfiguration {
    long long _field1;
    struct _VCVideoFormat _field2;
    unsigned int _field3;
    struct _VCVideoFormat *_field4;
    unsigned int _field5;
    struct _VCVideoFormat *_field6;
    struct _VCBitrateConfiguration _field7;
};

struct _VCMediaStreamConfigurationProviderAudio {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct _VCMediaStreamConfigurationProviderAudioPayload _field4[4];
    unsigned int _field5;
    unsigned int _field6[4];
    int _field7;
};

struct _VCMediaStreamConfigurationProviderAudioPayload {
    long long _field1;
    int _field2;
};

struct _VCMediaStreamConfigurationProviderVideo {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    unsigned int _field8;
};

struct _VCMediaStreamTransportSetupInfo {
    unsigned char setupType;
    union {
        struct {
            int rtpSocket;
            int rtcpSocket;
        } socketInfo;
        struct {
            struct tagIPPORT srcIPPORT;
            struct tagIPPORT srcRTPIPPort;
        } ipInfo;
    } ;
    unsigned int sourceRate;
    unsigned int datagramChannelToken;
    char isSessionIDValid;
};

struct _VCRange {
    float min;
    float max;
};

struct _VCSessionParticipantProminenceInfo {
    char isAudioActive;
    unsigned int audioActiveProbabilityThreshold;
    unsigned int audioInactiveProbabilityThreshold;
    unsigned int audioActiveAccumulationThreshold;
    unsigned int audioInactiveAccumulationThreshold;
    unsigned int audioActiveCount;
    unsigned int lastProminence;
    unsigned int refreshCounter;
};

struct _VCTextReceiverConfiguration {
    struct tagHANDLE *_field1;
    unsigned int _field2;
};

struct _VCTextTransmitterConfiguration {
    struct tagHANDLE *rtpHandle;
    unsigned int sampleRate;
    char isRedEnabled;
    unsigned int numRedundantPayloads;
};

struct _VCVideoFormat {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct cssm_data {
    unsigned long long Length;
    char *Data;
};

struct imageTag {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    float _field8;
    int _field9;
};

struct in_addr {
    unsigned int s_addr;
};

struct opaqueCMFormatDescription;

struct opaqueVCAudioBufferList;

struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct tagAFRCFB {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct tagAccessUnitHeaderInfo {
    unsigned short accessUnitCount;
    unsigned short accessUnitSize[3];
};

struct tagAudioFrame {
    int _field1;
    int _field2;
    _Bool _field3;
    unsigned short _field4;
    unsigned int _field5;
    unsigned char _field6[800];
    int _field7;
    int _field8;
    unsigned char _field9[16];
    unsigned char _field10;
    int _field11;
    int _field12;
    double _field13;
    int _field14;
    CDUnknownFunctionPointerType _field15;
    void *_field16;
    struct tagDecoderSettings *_field17;
    _Bool _field18;
    unsigned int _field19;
    unsigned char _field20;
    unsigned short _field21;
    struct tagAudioFrame *_field22;
    struct tagAudioFrame *_field23;
};

struct tagAudioHeaderData {
    int _field1;
    unsigned int _field2;
    unsigned char _field3[16];
    unsigned char _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    unsigned char _field9;
};

struct tagAudioPacket {
    int _field1;
    int _field2;
    int _field3;
    _Bool _field4;
    unsigned short _field5;
    unsigned int _field6;
    int _field7;
    double _field8;
    int _field9;
    unsigned char _field10[1472];
    int _field11;
    unsigned char _field12[256];
    unsigned char _field13;
    struct tagAudioFrame *_field14[4];
    int _field15;
    double _field16;
    int _field17;
    struct tagDecoderSettings *_field18;
    _Bool _field19;
    unsigned int _field20;
    unsigned char _field21;
    unsigned short _field22;
};

struct tagAudioPacketArray {
    struct tagAudioPacket *_field1[100];
    unsigned int _field2;
    unsigned int _field3;
};

struct tagAudioPacketData {
    struct tagAudioHeaderData _field1;
    char *_field2;
    int _field3;
};

struct tagBYE_RTCP {
    unsigned int _field1;
};

struct tagBufferNode {
    char *_field1;
    int _field2;
    int _field3;
    struct tagBufferNode *_field4;
};

struct tagCANDIDATE {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned char _field4[8];
    unsigned short _field5;
    unsigned short _field6;
    struct tagIPPORT _field7;
    struct tagIPPORT _field8;
    struct tagIPPORT _field9;
    unsigned int _field10;
};

struct tagCANDIDATEPAIR {
    struct tagCANDIDATE _field1;
    struct tagCANDIDATE _field2;
    int _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned char _field6[8];
    struct tagIPPORT _field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    struct tagCANDIDATEPARIR *_field17;
};

struct tagCANDIDATEPARIR;

struct tagCONNRESULT {
    unsigned int dwCallID;
    int iResultCount;
    int iRole;
    unsigned int dwRemoteCallID;
    int proto;
    int bIfRelay;
    unsigned short wRelayServType;
    unsigned short wChannelNumber;
    struct tagIPPORT mbLocal;
    struct tagIPPORT mbRemote;
    struct tagIPPORT mbSrc;
    struct tagIPPORT mbDst;
    struct tagIPPORT mbRemoteSrc;
    struct tagIPPORT mbRelayExt;
    unsigned int dwRTT;
    int bIfLocalCellularQoS;
    int bIfRemoteCellularQoS;
    int iLocalCellTech;
    int iRemoteCellTech;
    unsigned short wCellularMTU;
    int bIfUpgrade;
    int bIfPrimary;
    int bIfReplaceOnly;
    struct tagCONNRESULT *next;
};

struct tagCommNATInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3[3];
    unsigned int _field4;
};

struct tagDecoderSettings;

struct tagFIR_RTCP {
    unsigned int _field1;
    unsigned short _field2[10];
};

struct tagHANDLE {
    int _field1;
};

struct tagIPPORT {
    int iFlags;
    char szIfName[16];
    union {
        unsigned int dwIPv4;
        unsigned char abIPv6[16];
    } IP;
    unsigned short wPort;
};

struct tagNACK_RTCP {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct tagRR_RTCP {
    unsigned int _field1;
    struct tagRTCP_RRB _field2[1];
};

struct tagRTCPCOMMON {
    unsigned int :5;
    unsigned int :1;
    unsigned int :2;
    unsigned int :8;
    unsigned short _field1;
};

struct tagRTCPPACKET {
    struct tagRTCPCOMMON _field1;
    union {
        struct tagSR_RTCP _field1;
        struct tagRR_RTCP _field2;
        struct tagSDES_RTCP _field3;
        struct tagBYE_RTCP _field4;
        struct tagRTCP_APP _field5;
        struct tagRTCP_APP_LTRP _field6;
        struct tagFIR_RTCP _field7;
        struct tagNACK_RTCP _field8;
        struct tagRTCP_PSFB_PLI _field9;
        struct tagRTCP_PSFB_SLI _field10;
        struct tagRTCP_PSFB_FIR _field11;
        struct tagRTCP_PSFB_TST _field12;
        struct tagRTCP_PSFB_TST _field13;
        struct tagRTCP_RTPFB_GNACK _field14;
        struct tagRTCP_RTPFB_TMMB _field15;
        struct tagRTCP_RTPFB_TMMB _field16;
        struct tagRTCP_CUSTOM_SR _field17;
        struct tagRTCP_CUSTOM_RR _field18;
    } _field2;
};

struct tagRTCPSDES {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[258];
};

struct tagRTCP_APP {
    unsigned int _field1;
    unsigned int _field2;
};

struct tagRTCP_APP_LTRP {
    struct tagRTCP_APP _field1;
    unsigned int _field2;
};

struct tagRTCP_CUSTOM_RECEIVER_INFO {
    unsigned int :4;
    unsigned int :4;
};

struct tagRTCP_CUSTOM_RECEPTION_REPORT {
    unsigned int _field1;
    unsigned int :4;
    unsigned int :12;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4;
    unsigned char _field5;
};

struct tagRTCP_CUSTOM_RR {
    struct tagRTCP_APP _field1;
    unsigned int _field2;
    struct tagRTCP_CUSTOM_RECEIVER_INFO _field3;
    struct tagRTCP_CUSTOM_RECEPTION_REPORT _field4[1];
};

struct tagRTCP_CUSTOM_SENDER_INFO {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int :4;
    unsigned int :4;
};

struct tagRTCP_CUSTOM_SR {
    struct tagRTCP_APP _field1;
    unsigned int _field2;
    struct tagRTCP_CUSTOM_SENDER_INFO _field3;
    struct tagRTCP_CUSTOM_RECEPTION_REPORT _field4[1];
};

struct tagRTCP_FBCOMMON {
    unsigned int _field1;
    unsigned int _field2;
};

struct tagRTCP_PSFB_FIR {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
};

struct tagRTCP_PSFB_PLI {
    struct tagRTCP_FBCOMMON _field1;
};

struct tagRTCP_PSFB_SLI {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
};

struct tagRTCP_PSFB_TST {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct tagRTCP_RRB {
    unsigned int _field1;
    unsigned int :8;
    unsigned int :24;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct tagRTCP_RTPFB_GNACK {
    struct tagRTCP_FBCOMMON _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct tagRTCP_RTPFB_TMMB {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct tagSDES_RTCP {
    unsigned int _field1;
    struct tagRTCPSDES _field2;
};

struct tagSRTPCryptContext {
    struct cssm_data secAsn1Key;
    struct _CCCryptor *ccCryptorRef;
    unsigned char ccContext[404];
};

struct tagSRTPExchangeInfo {
    char _field1[65];
    char _field2[29];
    void *_field3;
};

struct tagSRTPINFO {
    int fSRTPInitialized;
    int fCancelled;
    struct _opaque_pthread_mutex_t xWait;
    struct _opaque_pthread_cond_t cWait;
    unsigned int dwSSRC;
    unsigned int dwRTPROC;
    unsigned short wFirstRTPSeq;
    unsigned short wHighestRTPSeq;
    unsigned int dwFirstRTCPSeq;
    unsigned int dwHighestRTCPSeq;
    unsigned long long SRTPIndex;
    int masterKeyLength;
    int sessionKeyLength;
    unsigned char MasterKey[32];
    unsigned char MasterSalt[14];
    unsigned char SessionKey[32];
    unsigned char SessionSalt[14];
    unsigned char SessionAuthenticationKey[20];
    struct _opaque_pthread_mutex_t MKIAccess;
    void *masterKeyIndex;
    void *masterKeyIndexInPacket;
    unsigned int SRTCPIndex;
    unsigned int dwDerivationRate;
    struct tagSRTPCryptContext cryptContext;
    struct tagSRTPTransformPolicy policy;
    unsigned int operatingMode;
};

struct tagSRTPTransformPolicy {
    int cipherMode;
    int masterKeyLength;
    int sessionKeyLength;
    int sessionSaltLength;
    int authenticationMode;
    int sessionAuthenticationKeyLength;
    int sessionAuthenticationTagLength;
};

struct tagSR_RTCP {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct tagRTCP_RRB _field7[1];
};

struct tagVCAudioRedPayload {
    int payloadType;
    char *buffer;
    int bufferLength;
    unsigned int timestamp;
    _Bool isRedAudio;
    unsigned char redCount;
    unsigned char sequenceOffset;
    unsigned char priority;
};

struct tagVCJitterBufferWRMReportingMetrics {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct tagVCMediaStreamSyncTime {
    double ntpTime;
    long long sampleRate;
    unsigned int rtpTimestampOfNTP;
};

struct tagVCMemoryPool {
    struct {
        void *_field1;
        long long _field2;
    } _field1;
    unsigned long long _field2;
};

struct tagVCRealTimeThread {
    unsigned int _field1;
    unsigned int _field2;
    struct _opaque_pthread_mutex_t _field3;
    struct _opaque_pthread_mutex_t _field4;
    struct _opaque_pthread_cond_t _field5;
    CDUnknownFunctionPointerType _field6;
    void *_field7;
    struct OpaqueFigThread *_field8;
    int _field9;
    char _field10[60];
    unsigned int _field11;
    unsigned int _field12;
};

struct tagVCRealTimeThreadParameters {
    int _field1;
};

struct tagVCSourceDestinationInfo {
    int _field1;
    union {
        struct {
            struct tagIPPORT _field1;
            struct tagIPPORT _field2;
            struct {
                _Bool _field1;
                unsigned short _field2;
            } _field3;
        } _field1;
        struct {
            int _field1;
            struct tagIPPORT _field2;
        } _field2;
        struct {
            unsigned int _field1;
            CDStruct_54fea20c _field2;
        } _field3;
    } _field2;
    struct tagVCSourceDestinationInfo *_field3;
};

struct tagVCStatisticsCollection {
    CDStruct_bcb9d60a _field1;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
    } _field2;
    CDStruct_38c55c66 _field3;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        double _field3;
    } _field4;
    CDStruct_4c5da9d9 _field5;
    CDStruct_6c8fb11a _field6;
};

struct tagVCTextJitterBufferConfiguration {
    unsigned int sampleRate;
    id delegate;
};

struct tagVCVideoReceiverConfig {
    unsigned int _field1;
    struct tagVCVideoReceiverStreamConfig _field2[4];
    _Bool _field3;
    long long _field4;
    int _field5;
    int _field6;
    int _field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    _Bool _field15;
    void *_field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
};

struct tagVCVideoReceiverStreamConfig {
    struct tagHANDLE *_field1;
    unsigned short _field2;
    unsigned short _field3;
    _Bool _field4;
    unsigned int _field5;
    unsigned int _field6[4];
    unsigned int _field7[4];
    unsigned short _field8;
};

struct tagWRMMetricsInfo {
    _Bool bInitialized;
    struct tagHANDLE *hRTPHandle;
    unsigned int dwReportInterval;
    unsigned int dwWrmTime;
    unsigned int dwPlaybackCount;
    unsigned int dwPlaybackCountSpeech;
    unsigned int dwErasureCount;
    unsigned int dwErasureSilence;
    unsigned int dwTimeOfLastRRPacket;
    unsigned int dwEstimatedRTTMilliSeconds;
    unsigned int dwJitter;
    unsigned int dwTotalPacketRecv;
    unsigned int dwDTXPacketRecv;
    unsigned long long callId;
    unsigned long long nominalJitterBufferDelay;
    unsigned long long targetJitterQueueSize;
    int nFraction;
    CDUnknownFunctionPointerType reportWRMMetricsCallback;
    struct {
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
    } wrmMetricsReportingContext;
    struct _opaque_pthread_mutex_t wrmMetricsReportingLock;
    unsigned int dwInternalTSRate;
    unsigned int dwPacketSent;
    unsigned int isCallAudioOnly;
    unsigned int bwEstimation;
    unsigned int targetBitrate;
    unsigned int oneWayRelativeDelay;
    unsigned int adaptationPacketLossPercentage;
    unsigned int isLocalCellular;
    unsigned int isVideoPaused;
};

struct timespec {
    long long _field1;
    long long _field2;
};

struct vDSP_DFT_SetupStruct;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char linkID;
    unsigned int sendTimestamp;
    unsigned int receiveTimestamp;
    unsigned int totalPacketSent;
    unsigned int totalPacketReceived;
    unsigned int totalByteSent;
    unsigned int totalByteReceived;
    unsigned int serverStatsByteUsed;
    unsigned int bandwidthSample;
    unsigned int bandwidthEstimation;
    double roundTripTime;
    double owrd;
    double packetLossRate;
    unsigned int actualBitrate;
    unsigned int serverStatsBitrate;
    unsigned int expectedBitrate;
} CDStruct_38c55c66;

typedef struct {
    unsigned int estimatorID;
    _Bool deregisterEstimator;
    _Bool isProbingSequence;
    _Bool isEndOfProbingSequence;
    unsigned int probingSequenceID;
    unsigned int messageLength;
    double arrivalTime;
    unsigned int mediaTimestamp;
} CDStruct_4c345eff;

typedef struct {
    unsigned int mediaEventType;
    unsigned int additionalFlushCount;
    unsigned int transactionID;
    unsigned int audioStallBitrate;
    _Bool isKeyFrame;
    unsigned int refreshFrameTimestamp;
    unsigned int refreshFramePayloadType;
    unsigned int refreshFramePacketCount;
} CDStruct_6c8fb11a;

typedef struct {
    unsigned int sendTimestamp;
    unsigned int queuingDelay;
    unsigned int remoteBWEstimation;
    unsigned int maxBurstyLoss;
    unsigned int totalReceivedPackets;
    unsigned int echoedSendTimestamp;
    unsigned int owrd;
} CDStruct_bcb9d60a;

typedef struct {
    unsigned int packetId;
    unsigned int totalPacketsReceived;
    unsigned int localBurstyLoss;
    double receiveTimestamp;
} CDStruct_4c5da9d9;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
} CDStruct_0db8e210;

typedef struct {
    unsigned long long _field1;
} CDStruct_69d7cc99;

typedef struct {
    unsigned short serverTimestamp;
    unsigned short serverPacketInterval;
    unsigned short totalServerPacketReceived;
    unsigned short totalServerPacketSent;
    unsigned short uplinkBandwidthEstimate;
} CDStruct_696d2ec8;

typedef struct {
    double time[100];
    double owrd[100];
    int frontIndex;
    int rearIndex;
    unsigned int size;
} CDStruct_714379fe;

typedef struct {
    char _field1[65];
    int _field2;
    char _field3[65];
    int _field4;
    void *_field5;
} CDStruct_5b6da142;

typedef struct {
    char _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4;
} CDStruct_54fea20c;

typedef struct {
    double requestTime;
    unsigned char linkID;
    unsigned short statsIdentifier;
    unsigned int totalLocalMediaPacketSent;
    unsigned int totalLocalMediaPacketReceived;
    unsigned int totalServerStatsByteUsed;
} CDStruct_b5e1e8f2;

typedef struct {
    double responseTime;
    unsigned char linkID;
    unsigned short statsIdentifier;
    unsigned short remoteTimestamp;
    unsigned short serverPacketInterval;
    unsigned short uplinkBandwidthSample;
    unsigned short totalRemoteMediaPacketSent;
    unsigned short totalRemoteMediaPacketReceived;
} CDStruct_2756d7ac;

typedef struct {
    double lastReceivedPacketTimestamp;
    double lastReportTimestamp;
    double noPacketInterval;
    _Bool isConnectionPaused;
    int type;
} CDStruct_b3143830;

typedef struct {
    double _field1;
    int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
} CDStruct_475a354f;

typedef struct {
    int _field1;
    unsigned char _field2[12];
} CDStruct_c3d3b44c;

typedef struct {
    int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
} CDStruct_d2860d30;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    unsigned int _field4;
} CDStruct_8aeecdac;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned short _field3;
    unsigned char _field4;
    char _field5;
    unsigned short _field6[12];
    unsigned char _field7;
    unsigned short _field8;
    CDStruct_696d2ec8 _field9;
} CDStruct_630f55d5;

typedef struct {
    unsigned short streamIDs[8];
    unsigned char numOfStreamIDs;
    _Bool probingGroupIDIsSet;
    unsigned short probingGroupID;
    unsigned char priority;
    _Bool pktCountingFlag;
    _Bool participantIDIsSet;
    unsigned long long participantID;
    _Bool participantGenerationCounterIsSet;
    _Bool ignorePriority;
    _Bool statsIDIsSet;
    unsigned short statsID;
    CDStruct_696d2ec8 statsPayload;
    _Bool isTransitionPacket;
} CDStruct_81244b4e;

typedef struct {
    unsigned char _field1;
    double _field2;
    unsigned char _field3[1472];
    int _field4;
    int _field5;
    CDStruct_81244b4e _field6;
} CDStruct_bb74c5c4;

typedef struct {
    int type;
    double arrivalTime;
    union {
        struct {
            unsigned int queueDepth1;
            unsigned int queueDepth2;
            unsigned int txBitrate;
            unsigned int averageBitrate;
            unsigned int averageBitrateLong;
            double expectedQueuingDelay;
            double bdcd;
            double normalizedBDCD;
            double normalizedDelay;
            char bbString[64];
        } baseband;
        CDStruct_bcb9d60a feedback;
        struct {
            unsigned int packetLossPercentage;
            unsigned int burstPacketLoss;
            unsigned int roundTripTimeMilliseconds;
            unsigned int isNetworkCongested;
            unsigned int owrd;
        } network;
        CDStruct_4c345eff probing;
        CDStruct_38c55c66 serverStats;
        struct {
            unsigned int packetId;
            unsigned int totalPacketsSent;
            double sendTimestamp;
        } packetSent;
        CDStruct_4c5da9d9 packetReceived;
        struct {
            unsigned int ssrc;
            unsigned int packetLossPercentage;
            unsigned int lastSequenceNumber;
            unsigned int roundTripTimeMilliseconds;
        } rtcpRR;
        struct {
            unsigned int mode;
            unsigned int remoteRadioAccessTechnology;
            unsigned int localRadioAccessTechnology;
            unsigned int maxBitrate;
            unsigned int minBitrate;
        } config;
        CDStruct_6c8fb11a mediaEvent;
    } ;
} CDStruct_dd06a755;

typedef struct {
    int type;
    unsigned short version;
    double arrivalTime;
    union {
        struct {
            unsigned short radioTechnology;
            unsigned char transmissionAntenna;
            unsigned short numberOfFlows;
            unsigned char flowType;
            char transmissionPower;
            unsigned int queueDepth1;
            unsigned int queueDepth2;
            unsigned int basebandTransmissionBytes;
            unsigned int lastTransmissionTimestamp;
        } report;
        struct {
            unsigned short transactionID;
            unsigned short totalNumDropped;
            unsigned short numberOfPayloadTypes;
            struct {
                unsigned char payloadType;
                unsigned short numberOfPacketDropped;
                unsigned short awDroppedSN[500];
            } PTSpecific[6];
        } dropAck;
        struct {
            unsigned short currentBitrate;
            unsigned short suggestedBitrate;
        } codecRateChange;
    } notes;
} CDStruct_b203c80d;

// Ambiguous groups
typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    double _field3;
} CDStruct_1c8e0384;

#pragma mark Named Unions

union tagNTP {
    unsigned long long wide;
    struct {
        unsigned int frac;
        unsigned int sec;
    } time;
};

