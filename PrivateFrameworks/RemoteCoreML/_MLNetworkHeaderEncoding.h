//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _MLNetworkHeaderEncoding : NSObject
{
}

+ (BOOL)isHeaderError:(unsigned long long)arg1;
+ (BOOL)isHeaderIncomingData:(unsigned long long)arg1;
+ (BOOL)isHeaderAcknowledgeFailData:(unsigned long long)arg1;
+ (BOOL)isHeaderAcknowledgeSucessData:(unsigned long long)arg1;
+ (BOOL)isHeaderCustom:(unsigned long long)arg1;
+ (BOOL)isHeaderPredictFeature:(unsigned long long)arg1;
+ (BOOL)isHeaderUnLoad:(unsigned long long)arg1;
+ (BOOL)isHeaderLoad:(unsigned long long)arg1;
+ (BOOL)isHeaderText:(unsigned long long)arg1;
+ (void *)getHeaderEnd:(id)arg1;
+ (void *)getHeaderDataStart:(id)arg1;
+ (unsigned long long)getHeaderDataSize:(id)arg1;
+ (unsigned long long)getHeaderSize;
+ (unsigned long long)getHeaderEncoding:(id)arg1;
+ (id)acknowledgeFailData;
+ (id)acknowledgeSucessData;
+ (id)custom:(id)arg1;
+ (id)predictFeature:(id)arg1;
+ (id)unLoadModel:(id)arg1;
+ (id)loadModel:(id)arg1;
+ (id)textDebug:(id)arg1;
+ (id)constructDataPacket:(id)arg1 HeaderEncoding:(unsigned long long)arg2;

@end
