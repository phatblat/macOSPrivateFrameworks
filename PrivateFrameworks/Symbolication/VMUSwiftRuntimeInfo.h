//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VMUMutableClassInfo;

@interface VMUSwiftRuntimeInfo : NSObject
{
    unsigned long long _nativeWeakReferenceMarkerMask;
    unsigned long long _nativeWeakReferenceMarkerValue;
    unsigned long long _nativeWeakReferencePointerMask;
    _Bool _nativeWeakReferencePointerIsSideTable;
    unsigned long long _refcountIsSideTableMarkerMask;
    unsigned long long _refcountIsSideTableMarkerValue;
    unsigned long long _sideTablePointerMask;
    unsigned char _sideTablePointerRightShift;
    unsigned char _sideTablePointerLeftShift;
    VMUMutableClassInfo *_sideTableLayout;
    VMUMutableClassInfo *_unownedExtraDataLayout;
    _Bool _runtimeHasStableABI;
}

@property(readonly, nonatomic) _Bool runtimeHasStableABI; // @synthesize runtimeHasStableABI=_runtimeHasStableABI;
@property(readonly, nonatomic) VMUMutableClassInfo *unownedExtraDataLayout; // @synthesize unownedExtraDataLayout=_unownedExtraDataLayout;
@property(readonly, nonatomic) VMUMutableClassInfo *sideTableLayout; // @synthesize sideTableLayout=_sideTableLayout;
@property(readonly, nonatomic) unsigned char sideTablePointerLeftShift; // @synthesize sideTablePointerLeftShift=_sideTablePointerLeftShift;
@property(readonly, nonatomic) unsigned char sideTablePointerRightShift; // @synthesize sideTablePointerRightShift=_sideTablePointerRightShift;
@property(readonly, nonatomic) unsigned long long sideTablePointerMask; // @synthesize sideTablePointerMask=_sideTablePointerMask;
@property(readonly, nonatomic) unsigned long long refcountIsSideTableMarkerValue; // @synthesize refcountIsSideTableMarkerValue=_refcountIsSideTableMarkerValue;
@property(readonly, nonatomic) unsigned long long refcountIsSideTableMarkerMask; // @synthesize refcountIsSideTableMarkerMask=_refcountIsSideTableMarkerMask;
@property(readonly, nonatomic) _Bool nativeWeakReferencePointerIsSideTable; // @synthesize nativeWeakReferencePointerIsSideTable=_nativeWeakReferencePointerIsSideTable;
@property(readonly, nonatomic) unsigned long long nativeWeakReferencePointerMask; // @synthesize nativeWeakReferencePointerMask=_nativeWeakReferencePointerMask;
@property(readonly, nonatomic) unsigned long long nativeWeakReferenceMarkerValue; // @synthesize nativeWeakReferenceMarkerValue=_nativeWeakReferenceMarkerValue;
@property(readonly, nonatomic) unsigned long long nativeWeakReferenceMarkerMask; // @synthesize nativeWeakReferenceMarkerMask=_nativeWeakReferenceMarkerMask;
- (void).cxx_destruct;
- (id)initWithSwiftCore:(struct _CSTypeRef)arg1 memoryReader:(CDUnknownBlockType)arg2;

@end

