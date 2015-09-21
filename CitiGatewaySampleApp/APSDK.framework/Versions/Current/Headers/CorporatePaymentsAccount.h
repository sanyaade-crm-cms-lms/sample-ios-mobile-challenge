//
//  CorporatePaymentsAccount.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsAccount
 @abstract CorporatePaymentsAccount class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CorporatePaymentsAccount
 @abstract Generated model object: CorporatePaymentsAccount.
 @discussion Use @link //apple_ref/occ/cat/CorporatePaymentsAccount(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CorporatePaymentsAccount/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CorporatePaymentsAccount : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CorporatePaymentsAccount.
 @result Class representing the data source associated with a CorporatePaymentsAccount.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var accountName
 @abstract Generated model property: account_name.
 */
@property (nonatomic, strong) NSString * accountName;

/*!
 @var baseCurrencyBalances
 @abstract Generated model property: base_currency_balances.
 */
@property (nonatomic, strong) NSDictionary * baseCurrencyBalances;

/*!
 @var branchName
 @abstract Generated model property: branch_name.
 */
@property (nonatomic, strong) NSString * branchName;

/*!
 @var countryIsoCode
 @abstract Generated model property: country_iso_code.
 */
@property (nonatomic, strong) NSString * countryIsoCode;

/*!
 @var localCurrencyIsoCode
 @abstract Generated model property: local_currency_iso_code.
 */
@property (nonatomic, strong) NSString * localCurrencyIsoCode;

/*!
 @var name
 @abstract Generated model property: name.
 */
@property (nonatomic, strong) NSString * name;

/*!
 @var status
 @abstract Generated model property: status.
 */
@property (nonatomic, strong) NSString * status;

@end
