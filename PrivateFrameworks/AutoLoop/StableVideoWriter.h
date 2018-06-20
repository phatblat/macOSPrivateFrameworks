//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VideoFrameWriterProgressRecipient.h"

@class AVAsset, AVAssetReader, ICHomographyWrapper, NSArray, NSConditionLock, NSError, NSString, VideoFrameWriterQueue;

__attribute__((visibility("hidden")))
@interface StableVideoWriter : NSObject <VideoFrameWriterProgressRecipient>
{
    struct ImageFeatureMatchParamRec featureMatchParams;
    _Bool useLimitedTimes;
    _Bool shouldUseReferenceFrame;
    _Bool didSkipFrames;
    unsigned int doingAnalyze;
    unsigned int doingStabilize;
    float featureImageScale;
    unsigned int smoothKernelLength;
    unsigned int smoothKernelGaussian;
    float smoothFactor;
    unsigned int removeAllMotion;
    unsigned int doCrop;
    unsigned int shouldDrawFeaturePoints;
    unsigned int shouldStampFrameInfo;
    unsigned int doRemapAnalyze;
    unsigned int passThruStabilize;
    unsigned int _cancelingAnalyze;
    unsigned int _cancelingStabilize;
    float _progressAmount;
    AVAsset *sourceMovieAsset;
    id progressIndicator;
    NSString *movieOutPath;
    id <VideoFrameWriterProgressRecipient> frameWriterUpdateCallback;
    VideoFrameWriterQueue *frameWriter;
    AVAssetReader *inputMovieReader;
    unsigned long long frameWriteBlockSize;
    ICHomographyWrapper *smoothedTargetHomographies;
    NSArray *frameSkipArray;
    // Error parsing type: ^{VideoHomographyAnalyzer=^^?^{_opaque_pthread_mutex_t}qq{Int32Size=ii}^{HomographyRecordVector}^{HomographyRecordVector}^{HomographyRecordVector}fIB{ImageFeatureMatchParamRec=iiiiiBBfffIIIBfffB}B^{FrameFeaturesRecord}{atomic<bool>=AB}{atomic<bool>=AB}{atomic<bool>=AB}{VideoFrameQueue=@{_opaque_pthread_mutex_t=q[56c]}{vector<InputVideoFrameRecord *, std::__1::allocator<InputVideoFrameRecord *> >=^^{InputVideoFrameRecord}^^{InputVideoFrameRecord}{__compressed_pair<InputVideoFrameRecord **, std::__1::allocator<InputVideoFrameRecord *> >=^^{InputVideoFrameRecord}}}IB^{WorkingPixmapPool}}f^{HomographyInfoRecord}^{InputVideoFrameRecord}^{WorkingPixmapPool}^v@^{__CVPixelBufferPool}^{HomographyRansacWrapper}ffffff{vector<LoopClosureTracker *, std::__1::allocator<LoopClosureTracker *> >=^^{LoopClosureTracker}^^{LoopClosureTracker}{__compressed_pair<LoopClosureTracker **, std::__1::allocator<LoopClosureTracker *> >=^^{LoopClosureTracker}}}}, name: _analyzer
    NSConditionLock *_movieReaderReadyLock;
    NSArray *_featureExtractionPixelFormatArray;
    NSArray *_videoStabilizationPixelFormatArray;
    NSError *_movieReaderError;
    struct CGSize _sourceMovieDimensions;
    CDStruct_1b6d18a9 limitedTimeStart;
    CDStruct_1b6d18a9 limitedTimeEnd;
    CDStruct_1b6d18a9 _referenceFrameTime;
    struct CGRect cropRect;
    struct CGAffineTransform inputTrackTransform;
}

@property(retain) NSError *movieReaderError; // @synthesize movieReaderError=_movieReaderError;
@property(retain, nonatomic) NSArray *videoStabilizationPixelFormatArray; // @synthesize videoStabilizationPixelFormatArray=_videoStabilizationPixelFormatArray;
@property(retain, nonatomic) NSArray *featureExtractionPixelFormatArray; // @synthesize featureExtractionPixelFormatArray=_featureExtractionPixelFormatArray;
@property(nonatomic) CDStruct_1b6d18a9 referenceFrameTime; // @synthesize referenceFrameTime=_referenceFrameTime;
@property(retain, nonatomic) NSConditionLock *movieReaderReadyLock; // @synthesize movieReaderReadyLock=_movieReaderReadyLock;
@property float progressAmount; // @synthesize progressAmount=_progressAmount;
@property unsigned int cancelingStabilize; // @synthesize cancelingStabilize=_cancelingStabilize;
@property unsigned int cancelingAnalyze; // @synthesize cancelingAnalyze=_cancelingAnalyze;
@property(nonatomic) struct CGSize sourceMovieDimensions; // @synthesize sourceMovieDimensions=_sourceMovieDimensions;
// Error parsing type for property analyzer:
// Property attributes: T^{VideoHomographyAnalyzer=^^?^{_opaque_pthread_mutex_t}qq{Int32Size=ii}^{HomographyRecordVector}^{HomographyRecordVector}^{HomographyRecordVector}fIB{ImageFeatureMatchParamRec=iiiiiBBfffIIIBfffB}B^{FrameFeaturesRecord}{atomic<bool>=AB}{atomic<bool>=AB}{atomic<bool>=AB}{VideoFrameQueue=@{_opaque_pthread_mutex_t=q[56c]}{vector<InputVideoFrameRecord *, std::__1::allocator<InputVideoFrameRecord *> >=^^{InputVideoFrameRecord}^^{InputVideoFrameRecord}{__compressed_pair<InputVideoFrameRecord **, std::__1::allocator<InputVideoFrameRecord *> >=^^{InputVideoFrameRecord}}}IB^{WorkingPixmapPool}}f^{HomographyInfoRecord}^{InputVideoFrameRecord}^{WorkingPixmapPool}^v@^{__CVPixelBufferPool}^{HomographyRansacWrapper}ffffff{vector<LoopClosureTracker *, std::__1::allocator<LoopClosureTracker *> >=^^{LoopClosureTracker}^^{LoopClosureTracker}{__compressed_pair<LoopClosureTracker **, std::__1::allocator<LoopClosureTracker *> >=^^{LoopClosureTracker}}}},N,V_analyzer

@property(nonatomic) _Bool didSkipFrames; // @synthesize didSkipFrames;
@property(retain) NSArray *frameSkipArray; // @synthesize frameSkipArray;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect;
@property unsigned int passThruStabilize; // @synthesize passThruStabilize;
@property(nonatomic) _Bool shouldUseReferenceFrame; // @synthesize shouldUseReferenceFrame;
@property(nonatomic) struct CGAffineTransform inputTrackTransform; // @synthesize inputTrackTransform;
@property(retain) ICHomographyWrapper *smoothedTargetHomographies; // @synthesize smoothedTargetHomographies;
@property(nonatomic) CDStruct_1b6d18a9 limitedTimeEnd; // @synthesize limitedTimeEnd;
@property(nonatomic) CDStruct_1b6d18a9 limitedTimeStart; // @synthesize limitedTimeStart;
@property(nonatomic) _Bool useLimitedTimes; // @synthesize useLimitedTimes;
@property(nonatomic) unsigned int doRemapAnalyze; // @synthesize doRemapAnalyze;
@property(nonatomic) unsigned int shouldStampFrameInfo; // @synthesize shouldStampFrameInfo;
@property(nonatomic) unsigned int shouldDrawFeaturePoints; // @synthesize shouldDrawFeaturePoints;
@property(nonatomic) unsigned int doCrop; // @synthesize doCrop;
@property(nonatomic) unsigned int removeAllMotion; // @synthesize removeAllMotion;
@property(nonatomic) unsigned long long frameWriteBlockSize; // @synthesize frameWriteBlockSize;
@property(retain) AVAssetReader *inputMovieReader; // @synthesize inputMovieReader;
@property(retain, nonatomic) VideoFrameWriterQueue *frameWriter; // @synthesize frameWriter;
@property __weak id <VideoFrameWriterProgressRecipient> frameWriterUpdateCallback; // @synthesize frameWriterUpdateCallback;
@property(retain, nonatomic) NSString *movieOutPath; // @synthesize movieOutPath;
@property __weak id progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) float smoothFactor; // @synthesize smoothFactor;
@property(nonatomic) unsigned int smoothKernelGaussian; // @synthesize smoothKernelGaussian;
@property(nonatomic) unsigned int smoothKernelLength; // @synthesize smoothKernelLength;
@property(nonatomic) float featureImageScale; // @synthesize featureImageScale;
@property(retain, nonatomic) AVAsset *sourceMovieAsset; // @synthesize sourceMovieAsset;
@property unsigned int doingStabilize; // @synthesize doingStabilize;
@property unsigned int doingAnalyze; // @synthesize doingAnalyze;
- (void).cxx_destruct;
- (void)SetMinimumTripodCropRatio:(float)arg1;
- (void)updateVideoProgress;
- (_Bool)haveDirectModeHomographies;
- (_Bool)haveSourceHomographies;
- (_Bool)CanDoTripodFromRemaps:(struct HomographyRecordVector *)arg1;
- (_Bool)CanDoTripodFromHomographies:(struct HomographyRecordVector *)arg1 firstFrame:(unsigned long long)arg2 lastFrame:(unsigned long long)arg3 refFrame:(unsigned long long)arg4 cropRectOut:(struct FloatRect *)arg5;
- (id)ComputeTripodOutputHomographies:(struct HomographyRecordVector *)arg1 firstFrame:(long long)arg2 lastFrame:(long long)arg3 cropRectOut:(struct CGRect *)arg4;
- (struct HomographyRecordVector *)GetRemapHomographies;
- (struct HomographyRecordVector *)GetSourceHomographies;
- (struct ImageFeatureMatchParamRec *)getFeatureMatchParams;
- (void)cancelStabilize;
- (void)cancelAnalyze;
- (void)StabilizeVideo;
- (void)FetchReferenceFrame;
- (BOOL)ComputeStabilizedOutputHomographies;
- (void)FindCropBoundsForHomographies:(struct HomographyRecordVector *)arg1 startIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (_Bool)FindFrameTimeIndexInHomographies:(struct HomographyRecordVector *)arg1 timeStamp:(CDStruct_1b6d18a9)arg2 indexOut:(unsigned long long *)arg3;
- (short)FeedMovieFramesToAnalyzer;
- (_Bool)shouldDropFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (short)FindSourceMovieHomographies;
- (void)StartAnalyzer;
- (void)StartAnalyzerForRemap;
- (void)WriteVideoWithHomographies_SingleThread:(struct HomographyRecordVector *)arg1 chainHomographies:(_Bool)arg2 passThruStabilization:(_Bool)arg3;
- (struct opaqueCMSampleBuffer *)readNextMovieSampleBuffer;
- (void)waitForMovieReaderReady;
- (void)beginReadingMovie:(id)arg1 pixelFormatArray:(id)arg2 withScale:(float)arg3;
- (void)updateCallbackForFrameIndex:(unsigned long long)arg1 withPixelBuffer:(struct __CVBuffer *)arg2;
- (void)drawFeaturePoints:(vector_9ddfe0fc *)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2 featureScale:(float)arg3;
- (void)tagFramePixelBuffer:(struct __CVBuffer *)arg1 withString:(id)arg2;
- (id)GenerateTempVideoFilePath;
- (struct __CVBuffer *)newPixelBufferFromCGImage:(struct CGImage *)arg1;
- (void)UpdateProgressWithTime:(CDStruct_1b6d18a9)arg1 inTimeRange:(CDStruct_e83c9415)arg2;
- (CDStruct_1b6d18a9)SingleFrameTimeForVideoTrack:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end
