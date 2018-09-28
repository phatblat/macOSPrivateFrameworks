//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKTransitAppletState.h>

#import "NSCopying.h"

@class NSData, NSNumber, NSString;

@interface PKFelicaTransitAppletState : PKTransitAppletState <NSCopying>
{
    _Bool _shinkansenTicketActive;
    _Bool _greenCarTicketUsed;
    _Bool _balanceAllowedForCommute;
    _Bool _lowBalanceNotificationEnabled;
    _Bool _hasShinkansenTicket;
    _Bool _hasGreenCarTicket;
    NSNumber *_shinkansenValidityStartDate;
    NSNumber *_shinkansenValidityTerm;
    NSData *_shinkansenOriginStationCode;
    NSData *_shinkansenDestinationStationCode;
    NSNumber *_shinkansenDepartureTime;
    NSNumber *_shinkansenArrivalTime;
    NSString *_shinkansenTrainName;
    NSNumber *_shinkansenCarNumber;
    NSNumber *_shinkansenSeatRow;
    NSNumber *_shinkansenSeatNumber;
    NSData *_shinkansenSecondaryOriginStationCode;
    NSData *_shinkansenSecondaryDestinationStationCode;
    NSNumber *_shinkansenSecondaryDepartureTime;
    NSNumber *_shinkansenSecondaryArrivalTime;
    NSString *_shinkansenSecondaryTrainName;
    NSNumber *_shinkansenSecondaryCarNumber;
    NSNumber *_shinkansenSecondarySeatRow;
    NSNumber *_shinkansenSecondarySeatNumber;
    NSData *_greenCarOriginStationCode;
    NSData *_greenCarDestinationStationCode;
    NSNumber *_greenCarValidityStartDate;
    NSString *_shinkansenOriginStationString;
    NSString *_shinkansenDestinationStationString;
    NSString *_shinkansenSecondaryOriginStationString;
    NSString *_shinkansenSecondaryDestinationStationString;
    NSString *_greenCarOriginStationString;
    NSString *_greenCarDestinationStationString;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *greenCarDestinationStationString; // @synthesize greenCarDestinationStationString=_greenCarDestinationStationString;
@property(copy, nonatomic) NSString *greenCarOriginStationString; // @synthesize greenCarOriginStationString=_greenCarOriginStationString;
@property(copy, nonatomic) NSString *shinkansenSecondaryDestinationStationString; // @synthesize shinkansenSecondaryDestinationStationString=_shinkansenSecondaryDestinationStationString;
@property(copy, nonatomic) NSString *shinkansenSecondaryOriginStationString; // @synthesize shinkansenSecondaryOriginStationString=_shinkansenSecondaryOriginStationString;
@property(copy, nonatomic) NSString *shinkansenDestinationStationString; // @synthesize shinkansenDestinationStationString=_shinkansenDestinationStationString;
@property(copy, nonatomic) NSString *shinkansenOriginStationString; // @synthesize shinkansenOriginStationString=_shinkansenOriginStationString;
@property(nonatomic) _Bool hasGreenCarTicket; // @synthesize hasGreenCarTicket=_hasGreenCarTicket;
@property(copy, nonatomic) NSNumber *greenCarValidityStartDate; // @synthesize greenCarValidityStartDate=_greenCarValidityStartDate;
@property(copy, nonatomic) NSData *greenCarDestinationStationCode; // @synthesize greenCarDestinationStationCode=_greenCarDestinationStationCode;
@property(copy, nonatomic) NSData *greenCarOriginStationCode; // @synthesize greenCarOriginStationCode=_greenCarOriginStationCode;
@property(nonatomic) _Bool hasShinkansenTicket; // @synthesize hasShinkansenTicket=_hasShinkansenTicket;
@property(copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber; // @synthesize shinkansenSecondarySeatNumber=_shinkansenSecondarySeatNumber;
@property(copy, nonatomic) NSNumber *shinkansenSecondarySeatRow; // @synthesize shinkansenSecondarySeatRow=_shinkansenSecondarySeatRow;
@property(copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber; // @synthesize shinkansenSecondaryCarNumber=_shinkansenSecondaryCarNumber;
@property(copy, nonatomic) NSString *shinkansenSecondaryTrainName; // @synthesize shinkansenSecondaryTrainName=_shinkansenSecondaryTrainName;
@property(copy, nonatomic) NSNumber *shinkansenSecondaryArrivalTime; // @synthesize shinkansenSecondaryArrivalTime=_shinkansenSecondaryArrivalTime;
@property(copy, nonatomic) NSNumber *shinkansenSecondaryDepartureTime; // @synthesize shinkansenSecondaryDepartureTime=_shinkansenSecondaryDepartureTime;
@property(copy, nonatomic) NSData *shinkansenSecondaryDestinationStationCode; // @synthesize shinkansenSecondaryDestinationStationCode=_shinkansenSecondaryDestinationStationCode;
@property(copy, nonatomic) NSData *shinkansenSecondaryOriginStationCode; // @synthesize shinkansenSecondaryOriginStationCode=_shinkansenSecondaryOriginStationCode;
@property(copy, nonatomic) NSNumber *shinkansenSeatNumber; // @synthesize shinkansenSeatNumber=_shinkansenSeatNumber;
@property(copy, nonatomic) NSNumber *shinkansenSeatRow; // @synthesize shinkansenSeatRow=_shinkansenSeatRow;
@property(copy, nonatomic) NSNumber *shinkansenCarNumber; // @synthesize shinkansenCarNumber=_shinkansenCarNumber;
@property(copy, nonatomic) NSString *shinkansenTrainName; // @synthesize shinkansenTrainName=_shinkansenTrainName;
@property(copy, nonatomic) NSNumber *shinkansenArrivalTime; // @synthesize shinkansenArrivalTime=_shinkansenArrivalTime;
@property(copy, nonatomic) NSNumber *shinkansenDepartureTime; // @synthesize shinkansenDepartureTime=_shinkansenDepartureTime;
@property(copy, nonatomic) NSData *shinkansenDestinationStationCode; // @synthesize shinkansenDestinationStationCode=_shinkansenDestinationStationCode;
@property(copy, nonatomic) NSData *shinkansenOriginStationCode; // @synthesize shinkansenOriginStationCode=_shinkansenOriginStationCode;
@property(copy, nonatomic) NSNumber *shinkansenValidityTerm; // @synthesize shinkansenValidityTerm=_shinkansenValidityTerm;
@property(copy, nonatomic) NSNumber *shinkansenValidityStartDate; // @synthesize shinkansenValidityStartDate=_shinkansenValidityStartDate;
@property(nonatomic, getter=isLowBalanceNotificationEnabled) _Bool lowBalanceNotificationEnabled; // @synthesize lowBalanceNotificationEnabled=_lowBalanceNotificationEnabled;
@property(nonatomic, getter=isBalanceAllowedForCommute) _Bool balanceAllowedForCommute; // @synthesize balanceAllowedForCommute=_balanceAllowedForCommute;
@property(nonatomic, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed; // @synthesize greenCarTicketUsed=_greenCarTicketUsed;
@property(nonatomic, getter=isShinkansenTicketActive) _Bool shinkansenTicketActive; // @synthesize shinkansenTicketActive=_shinkansenTicketActive;
- (void).cxx_destruct;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1;
- (id)_concreteTransactionForRecordAtIndex:(unsigned long long)arg1 withBalance:(unsigned int *)arg2 historyRecords:(id)arg3 terminalState:(id)arg4 numberProcessed:(unsigned long long *)arg5 exitedShinkansen:(_Bool *)arg6;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id *)arg4 ephemeralTransaction:(id *)arg5;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id *)arg2 ephemeralTransaction:(id *)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isInShinkansenStation) _Bool inShinkansenStation; // @dynamic inShinkansenStation;
- (_Bool)isInStation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

