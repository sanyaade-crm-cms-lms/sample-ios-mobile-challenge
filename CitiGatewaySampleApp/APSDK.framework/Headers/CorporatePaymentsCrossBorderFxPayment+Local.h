//
//  CorporatePaymentsCrossBorderFxPayment+Local.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsCrossBorderFxPayment+Local
 @abstract Local category for CorporatePaymentsCrossBorderFxPayment class
 */

#import "CorporatePaymentsCrossBorderFxPayment.h"

/*!
 @category CorporatePaymentsCrossBorderFxPayment (Local)
 @abstract Adds local query capabilities to CorporatePaymentsCrossBorderFxPayment.
 @discussion Serves as a strongly-typed wrapper around @link //apple_ref/occ/cat/APObject(Local) @/link methods.
 */ 
@interface CorporatePaymentsCrossBorderFxPayment (Local)

/*!
 @method allLocalWithOffset:limit:
 @abstract Fetches objects matching query scope "all" from local cache, with pagination.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)allLocalWithOffset:(NSUInteger)offset limit:(NSUInteger)limit;

/*!
 @method exactMatchLocalWithParams:offset:limit:
 @abstract Fetches objects matching query scope "exact_match" from local cache, with pagination.
 @param params Scope parameter - params.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)exactMatchLocalWithParams:(NSDictionary *)params offset:(NSUInteger)offset limit:(NSUInteger)limit;

/*!
 @method fxPaymentsLocalWithCitiRef:customerTxnRef:toCurrency:beneficiaryName:valueDate:offset:limit:
 @abstract Fetches objects matching query scope "fx_payments" from local cache, with pagination.
 @param citiRef Scope parameter - citiRef.
 @param customerTxnRef Scope parameter - customerTxnRef.
 @param toCurrency Scope parameter - toCurrency.
 @param beneficiaryName Scope parameter - beneficiaryName.
 @param valueDate Scope parameter - valueDate.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)fxPaymentsLocalWithCitiRef:(NSString *)citiRef customerTxnRef:(NSString *)customerTxnRef toCurrency:(NSString *)toCurrency beneficiaryName:(NSString *)beneficiaryName valueDate:(NSString *)valueDate offset:(NSUInteger)offset limit:(NSUInteger)limit;

@end