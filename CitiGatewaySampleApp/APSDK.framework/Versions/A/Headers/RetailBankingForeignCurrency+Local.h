//
//  RetailBankingForeignCurrency+Local.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingForeignCurrency+Local
 @abstract Local category for RetailBankingForeignCurrency class
 */

#import "RetailBankingForeignCurrency.h"

/*!
 @category RetailBankingForeignCurrency (Local)
 @abstract Adds local query capabilities to RetailBankingForeignCurrency.
 @discussion Serves as a strongly-typed wrapper around @link //apple_ref/occ/cat/APObject(Local) @/link methods.
 */ 
@interface RetailBankingForeignCurrency (Local)

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
 @method foreignCurrencyLocalWithFromCurrency:toCurrency:offset:limit:
 @abstract Fetches objects matching query scope "foreign_currency" from local cache, with pagination.
 @param fromCurrency Scope parameter - fromCurrency.
 @param toCurrency Scope parameter - toCurrency.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)foreignCurrencyLocalWithFromCurrency:(NSString *)fromCurrency toCurrency:(NSString *)toCurrency offset:(NSUInteger)offset limit:(NSUInteger)limit;

@end