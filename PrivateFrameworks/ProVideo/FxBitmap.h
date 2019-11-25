//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/FxImage.h>

#import "NSCopying.h"

@interface FxBitmap : FxImage <NSCopying>
{
    struct FxBitmapPriv *_bitmapPriv;
}

+ (void)setGuaranteeMemoryCallback:(CDUnknownFunctionPointerType)arg1;
- (void)_setOwned:(BOOL)arg1;
- (void)_setOwnedDataPtr:(void *)arg1;
- (BOOL)_ownsData;
- (BOOL)_verifyImage;
- (unsigned long long)rowBytes;
- (void)setRowBytes:(unsigned long long)arg1;
- (void *)dataPtrForPositionX:(unsigned long long)arg1 Y:(unsigned long long)arg2;
- (void *)dataPtr;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCopy:(id)arg1 andInfo:(CDStruct_4a07eeda)arg2;
- (id)initWithCopy:(id)arg1 andInfo:(CDStruct_4a07eeda)arg2 andRowBytes:(unsigned long long)arg3;
- (id)initWithCopy:(id)arg1;
- (id)initWithInfo:(CDStruct_4a07eeda)arg1 rowBytes:(unsigned long long)arg2 andData:(void *)arg3;
- (id)initWithInfo:(CDStruct_4a07eeda)arg1 andData:(void *)arg2;
- (id)initWithInfo:(CDStruct_4a07eeda)arg1;
- (id)init;
- (unsigned long long)_packedRowBytes;

@end

