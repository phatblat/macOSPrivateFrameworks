//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SGExtractionInfo;

@interface SGDetection : NSObject
{
    BOOL _hasPhoneLabel;
    BOOL _isUnlikelyPhone;
    unsigned int _type;
    NSString *_extraction;
    NSString *_context;
    NSString *_label;
    SGExtractionInfo *_extractionInfo;
    struct _NSRange _contextRangeOfInterest;
    struct _NSRange _match;
}

+ (id)detectionWithType:(unsigned int)arg1 text:(id)arg2 matchRange:(struct _NSRange)arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 extractionInfo:(id)arg7 isUnlikelyPhone:(BOOL)arg8;
@property(readonly, nonatomic) BOOL isUnlikelyPhone; // @synthesize isUnlikelyPhone=_isUnlikelyPhone;
@property(readonly, nonatomic) SGExtractionInfo *extractionInfo; // @synthesize extractionInfo=_extractionInfo;
@property(readonly, nonatomic) struct _NSRange match; // @synthesize match=_match;
@property(readonly, nonatomic) BOOL hasPhoneLabel; // @synthesize hasPhoneLabel=_hasPhoneLabel;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) struct _NSRange contextRangeOfInterest; // @synthesize contextRangeOfInterest=_contextRangeOfInterest;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *extraction; // @synthesize extraction=_extraction;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned int)arg1 extraction:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 match:(struct _NSRange)arg7 extractionInfo:(id)arg8 isUnlikelyPhone:(BOOL)arg9;

@end

